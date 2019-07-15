#include "CastingTimeRequirer.h"

#include "CastComplete.h"
#include "Character.h"
#include "CharacterSpells.h"
#include "CharacterStats.h"
#include "Engine.h"
#include "Utils/CompareDouble.h"

CastingTimeRequirer::CastingTimeRequirer(Character* caster, const unsigned casting_time_ms) :
    caster(caster),
    engine(caster->get_engine()),
    casting_time_ms(casting_time_ms),
    cast_id(std::numeric_limits<unsigned>::max())
{}

void CastingTimeRequirer::start_cast() {
    cast_id = caster->get_spells()->start_cast();
    auto* new_event = new CastComplete(this, engine->get_current_priority() + get_cast_time());
    this->engine->add_event(new_event);
}

void CastingTimeRequirer::complete_cast() {
    caster->get_spells()->complete_cast(cast_id);
    complete_cast_effect();
}

double CastingTimeRequirer::get_cast_time() const {
    return (double(casting_time_ms) / 1000) / caster->get_stats()->get_casting_speed_mod();
}

void CastingTimeRequirer::reset_effect() {
    cast_id = std::numeric_limits<unsigned>::max();
}

double CastingTimeRequirer::spell_coefficient_from_casting_time(const unsigned casting_time_ms, const unsigned level_req) {
    if (casting_time_ms < 1500)
        return 1500 / 3500;
    if (casting_time_ms > 3000)
        return 1.0;

    const double base_coefficient = static_cast<double>(casting_time_ms) / 3500;
    if (level_req >= 20)
        return base_coefficient;

    return std::max(0.0, base_coefficient - (20 - level_req) * 0.0375);
}
