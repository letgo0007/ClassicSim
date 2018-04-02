
#include "GenericTalent.h"
#include "Character.h"
#include "TalentTree.h"

GenericTalent::GenericTalent(Character *pchar, TalentTree* tree, const QString &name, const QString &position, const QString &icon, const int max_points, const QString &rank_description, const QVector<QPair<int, int>> format_values) :
    Talent(pchar, tree, name, position, icon, max_points)
{
    if (format_values.size() > 0) {
        initialize_rank_descriptions(rank_description, format_values);
    }
    else {
        rank_descriptions.insert(0, rank_description);
        rank_descriptions.insert(1, rank_description);
    }
}

GenericTalent::~GenericTalent() {

}

void GenericTalent::apply_rank_effect() {}

void GenericTalent::remove_rank_effect() {}