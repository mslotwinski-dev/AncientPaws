#include "monkeys.hpp"

Monkey::Monkey(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Monkey::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) {
  int target = 0;
  if (good.size() != 0) {
    target = 0;
  }

  double CalcDamage = this->damage - good[target]->GetDefense();

  std::string result = GetName() + " uderza włócznią w " + good[target]->GetName() + " zadając " +
                       std::to_string(static_cast<int>(std::round(CalcDamage))) + " punktów obrażeń";

  if (good[target]->DealDmg(CalcDamage)) {
    result += " zabijając przeciwnika";
  }

  return result;
}

std::string Monkey::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) {
  int target = 0;
  if (good.size() != 0) {
    target = 0;
  }

  double CalcDamage = this->damage - good[target]->GetDefense();

  std::string result = GetName() + " rzuca bananem w " + good[target]->GetName() + " zadając " +
                       std::to_string(static_cast<int>(std::round(CalcDamage))) + " punktów obrażeń";

  if (good[target]->DealDmg(CalcDamage)) {
    result += " zabijając przeciwnika";
  }

  return result;
}

MonkeyWarrior::MonkeyWarrior(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

std::string MonkeyWarrior::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string MonkeyWarrior::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

MonkeyHunter::MonkeyHunter(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

std::string MonkeyHunter::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string MonkeyHunter::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

MonkeyBard::MonkeyBard(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

std::string MonkeyBard::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string MonkeyBard::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

MonkeyEngineer::MonkeyEngineer(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

std::string MonkeyEngineer::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string MonkeyEngineer::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

MonkeyGeneral::MonkeyGeneral(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

std::string MonkeyGeneral::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string MonkeyGeneral::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }