#include "hero.hpp"

Armadillo::Armadillo(std::string name, double damage, double maxhealth, double defense, double speed)
    : Hero(name, damage, maxhealth, defense, speed) {}

std::string Armadillo::GetName() const { return "Pancernik " + name; };

std::vector<std::string> Armadillo::GetSkillList() {
  std::vector<std::string> a;

  a.push_back("Ostry kamień");
  a.push_back("Nie do przebicia");
  a.push_back("Zgniecenie");
  return a;
}

std::string Armadillo::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Armadillo::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

std::string Armadillo::SkillC(std::vector<Entity *> good, std::vector<Entity *> bad) { return "C"; }
