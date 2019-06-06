#include "TemplateCharacters.h"

#include "Utils/Check.h"

QString TemplateCharacters::setup_string(const QString& template_char) {
    if (template_char == "Warrior DW Fury Pre-Raid")
        return "PHASE=0|RACE=Orc|CLASS=Warrior|MAINHAND=12940|OFFHAND=12939|RANGED=17069|HEAD=22411|NECK=15411|SHOULDERS=12927|BACK=13340|CHEST=11726|WRIST=12936|GLOVES=15063|BELT=13959001|LEGS=15062|BOOTS=13967|RING1=17713|RING2=13098|TRINKET1=11815|TRINKET2=13965|LEFT[1LL=2:1MR=3:2ML=5:3LL=2:3MR=3:4MR=2]|MID[1MR=5:2MR=5:3RR=5:4LL=5:4ML=2:4MR=5:5ML=1:6MR=5:7ML=1]|BUFFS[Trueshot Aura=N/A:Mark of the Wild=N/A:Grilled Squid=N/A:Elixir of Brute Force=N/A:Elixir of the Mongoose=N/A:Juju Might=N/A:Juju Power=N/A:Scroll of Strength IV=N/A:R.O.I.D.S=N/A:Battle Squawk=N/A:Fengus' Ferocity=N/A:Rallying Cry of the Dragonslayer=N/A:Songflower Serenade=N/A:Spirit of Zandalar=N/A:Sayge's Dark Fortune of Damage=N/A]|DEBUFFS[Sunder Armor=N/A:Curse of Recklessness=N/A:Faerie Fire=N/A:Annihilator Proc=N/A:Improved Shadow Bolt=N/A]|TARGET_LVL=63|TARGET_TYPE=Beast|TARGET_BASE_ARMOR=3750|ROTATION=DW Fury High Rage|MH_TEMPORARY_ENCHANT=12|MH_ENCHANT=0|OH_TEMPORARY_ENCHANT=32|OH_ENCHANT=0|HEAD_ENCHANT=-1|SHOULDER_ENCHANT=-1|BACK_ENCHANT=26|CHEST_ENCHANT=29|WRIST_ENCHANT=15|GLOVES_ENCHANT=-1|LEGS_ENCHANT=-1|BOOTS_ENCHANT=30|RANGED_ENCHANT=-1|RULESET=0";

    if (template_char == "Warrior DW Fury BWL")
        return "PHASE=2|RACE=Orc|CLASS=Warrior|MAINHAND=19363|OFFHAND=17068|RANGED=17069|HEAD=12640|NECK=18404|SHOULDERS=12927|BACK=18541|CHEST=11726|WRIST=18812|GLOVES=15063|BELT=19137|LEGS=22385|BOOTS=19387|RING1=19384|RING2=18821|TRINKET1=11815|TRINKET2=13965|LEFT[1LL=2:1MR=3:2ML=5:3LL=2:3MR=3:4MR=2]|MID[1MR=5:2MR=5:3RR=5:4LL=5:4ML=2:4MR=5:5ML=1:6MR=5:7ML=1]|BUFFS[Trueshot Aura=N/A:Mark of the Wild=N/A:Grilled Squid=N/A:Elixir of Brute Force=N/A:Elixir of the Mongoose=N/A:Juju Might=N/A:Juju Power=N/A:Scroll of Strength IV=N/A:R.O.I.D.S=N/A:Battle Squawk=N/A:Fengus' Ferocity=N/A:Rallying Cry of the Dragonslayer=N/A:Songflower Serenade=N/A:Spirit of Zandalar=N/A:Sayge's Dark Fortune of Damage=N/A]|DEBUFFS[Sunder Armor=N/A:Curse of Recklessness=N/A:Faerie Fire=N/A:Annihilator Proc=N/A:Improved Shadow Bolt=N/A]|TARGET_LVL=63|TARGET_TYPE=Beast|TARGET_BASE_ARMOR=3750|ROTATION=DW Fury High Rage|MH_TEMPORARY_ENCHANT=12|MH_ENCHANT=0|OH_TEMPORARY_ENCHANT=32|OH_ENCHANT=0|HEAD_ENCHANT=-1|SHOULDER_ENCHANT=-1|BACK_ENCHANT=26|CHEST_ENCHANT=29|WRIST_ENCHANT=-1|GLOVES_ENCHANT=-1|LEGS_ENCHANT=-1|BOOTS_ENCHANT=30|RANGED_ENCHANT=-1|RULESET=0";

    if (template_char == "Warrior DW Fury AQ")
        return "PHASE=4|RACE=Orc|CLASS=Warrior|MAINHAND=19363|OFFHAND=17068|RANGED=17069|HEAD=12640|NECK=18404|SHOULDERS=21330|BACK=18541|CHEST=11726|WRIST=21602|GLOVES=21581|BELT=19137|LEGS=22385|BOOTS=19387|RING1=19384|RING2=18821|TRINKET1=11815|TRINKET2=19406|LEFT[1LL=2:1MR=3:2ML=5:3LL=2:3MR=3:4MR=2]|MID[1MR=5:2MR=5:3RR=5:4LL=5:4ML=2:4MR=5:5ML=1:6MR=5:7ML=1]|BUFFS[Trueshot Aura=N/A:Mark of the Wild=N/A:Grilled Squid=N/A:Elixir of Brute Force=N/A:Elixir of the Mongoose=N/A:Juju Might=N/A:Juju Power=N/A:Scroll of Strength IV=N/A:R.O.I.D.S=N/A:Battle Squawk=N/A:Fengus' Ferocity=N/A:Rallying Cry of the Dragonslayer=N/A:Songflower Serenade=N/A:Spirit of Zandalar=N/A:Sayge's Dark Fortune of Damage=N/A]|DEBUFFS[Sunder Armor=N/A:Curse of Recklessness=N/A:Faerie Fire=N/A:Annihilator Proc=N/A:Improved Shadow Bolt=N/A]|TARGET_LVL=63|TARGET_TYPE=Beast|TARGET_BASE_ARMOR=3750|ROTATION=DW Fury High Rage|MH_TEMPORARY_ENCHANT=12|MH_ENCHANT=0|OH_TEMPORARY_ENCHANT=32|OH_ENCHANT=0|HEAD_ENCHANT=19|SHOULDER_ENCHANT=27|BACK_ENCHANT=26|CHEST_ENCHANT=29|WRIST_ENCHANT=-1|GLOVES_ENCHANT=16|LEGS_ENCHANT=19|BOOTS_ENCHANT=30|RANGED_ENCHANT=-1|RULESET=0";

    if (template_char == "Warrior DW Fury Naxx")
        return "PHASE=5|RACE=Orc|CLASS=Warrior|MAINHAND=22816|OFFHAND=19363|RANGED=17069|HEAD=12640|NECK=18404|SHOULDERS=21330|BACK=18541|CHEST=23000|WRIST=22936|GLOVES=21581|BELT=23219|LEGS=23068|BOOTS=19387|RING1=19384|RING2=23038|TRINKET1=22954|TRINKET2=19406|LEFT[1LL=2:1MR=3:2ML=5:3LL=2:3MR=3:4MR=2]|MID[1MR=5:2MR=5:3RR=5:4LL=5:4ML=2:4MR=5:5ML=1:6MR=5:7ML=1]|BUFFS[Trueshot Aura=N/A:Mark of the Wild=N/A:Grilled Squid=N/A:Elixir of Brute Force=N/A:Elixir of the Mongoose=N/A:Juju Might=N/A:Juju Power=N/A:Scroll of Strength IV=N/A:R.O.I.D.S=N/A:Battle Squawk=N/A:Fengus' Ferocity=N/A:Rallying Cry of the Dragonslayer=N/A:Songflower Serenade=N/A:Spirit of Zandalar=N/A:Sayge's Dark Fortune of Damage=N/A]|DEBUFFS[Sunder Armor=N/A:Curse of Recklessness=N/A:Faerie Fire=N/A:Annihilator Proc=N/A:Improved Shadow Bolt=N/A]|TARGET_LVL=63|TARGET_TYPE=Beast|TARGET_BASE_ARMOR=3750|ROTATION=DW Fury High Rage|MH_TEMPORARY_ENCHANT=12|MH_ENCHANT=0|OH_TEMPORARY_ENCHANT=32|OH_ENCHANT=0|HEAD_ENCHANT=19|SHOULDER_ENCHANT=27|BACK_ENCHANT=26|CHEST_ENCHANT=29|WRIST_ENCHANT=15|GLOVES_ENCHANT=16|LEGS_ENCHANT=19|BOOTS_ENCHANT=30|RANGED_ENCHANT=-1|RULESET=0";

    check(false, QString("Missing template '%1'").arg(template_char).toStdString());
    return "";
}
