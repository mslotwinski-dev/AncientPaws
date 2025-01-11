#include "hero.hpp"

Hedgehog::Hedgehog(std::string name, double damage, double maxhealth, double defense, double speed)
    : Hero(name, damage, maxhealth, defense, speed) {}

std::string Hedgehog::GetName() const { return "Jeż " + name; };

void Hedgehog::SkillA() { std::cout << "Skill A" << std::endl; }

void Hedgehog::SkillB() { std::cout << "Skill B" << std::endl; }

void Hedgehog::SkillC() { std::cout << "Skill C" << std::endl; }
