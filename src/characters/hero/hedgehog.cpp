#include "hero.hpp"

Hedgehog::Hedgehog(std::string name, double damage, double maxhealth, double defense, double speed)
    : Hero(name, damage, maxhealth, defense, speed) {}

std::string Hedgehog::GetName() const { return "Jeż " + name; };

std::vector<std::string> Hedgehog::GetSkillList() {
  std::vector<std::string> a;

  a.push_back("Nawałnica ostrzy");
  a.push_back("Tępy kolec");
  a.push_back("Przebicie");
  return a;
}

std::string Hedgehog::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Hedgehog::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

std::string Hedgehog::SkillC(std::vector<Entity *> good, std::vector<Entity *> bad) { return "C"; }
