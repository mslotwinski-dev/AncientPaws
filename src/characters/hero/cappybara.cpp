#include "hero.hpp"

Cappybara::Cappybara(std::string name, double damage, double maxhealth, double defense, double speed)
  : Hero(name, damage, maxhealth, defense, speed) {}

std::string Cappybara::GetName() const {
  return "Kapibara " + name;
};

void Cappybara::SkillA() {
  std::cout<<"Skill A"<<std::endl;
}

void Cappybara::SkillB() {
  std::cout<<"Skill B"<<std::endl;
}

void Cappybara::SkillC() {
  std::cout<<"Skill C"<<std::endl;
}

