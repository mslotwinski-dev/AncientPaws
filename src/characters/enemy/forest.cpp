#include "forest.hpp"

Anteater::Anteater(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Anteater::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Anteater::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Harpy::Harpy(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Harpy::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Harpy::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Hawk::Hawk(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Hawk::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Hawk::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Weasel::Weasel(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Weasel::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) {
  Entity *target = PickTarget(good);

  double _damage = CalcDamage(target);

  std::string result =
      GetName() + " drapie pazurami w " + target->GetName() + " zadając " + ParseDamage(_damage) + " punktów obrażeń";

  if (target->DealDmg(_damage)) {
    result += " zabijając przeciwnika";
  }

  return result;
}

std::string Weasel::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) {
  std::string result =
      GetName() + " przygotowuje się do kontrataku zwiększając szybkość i atak o " + ParseBuff(5) + " punktów";

  this->speed += 5;
  this->damage += 5;

  return result;
}

Snake::Snake(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Snake::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Snake::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Cayman::Cayman(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Cayman::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Cayman::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }