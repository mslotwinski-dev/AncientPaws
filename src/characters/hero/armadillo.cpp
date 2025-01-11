#include "hero.hpp"

Armadillo::Armadillo(std::string name, double damage, double maxhealth, double defense, double speed)
    : Hero(name, damage, maxhealth, defense, speed) {}

std::string Armadillo::GetName() const { return "Pancernik " + name; };

void Armadillo::SkillA() { std::cout << "Skill A" << std::endl; }

void Armadillo::SkillB() { std::cout << "Skill B" << std::endl; }

void Armadillo::SkillC() { std::cout << "Skill C" << std::endl; }
