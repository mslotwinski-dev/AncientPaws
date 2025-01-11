#include "mountain.hpp"

Puma::Puma(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Puma::SkillA() { std::cout << "Puma Skill A" << std::endl; }

void Puma::SkillB() { std::cout << "Puma Skill B" << std::endl; }

Fox::Fox(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Fox::SkillA() { std::cout << "Fox Skill A" << std::endl; }

void Fox::SkillB() { std::cout << "Fox Skill B" << std::endl; }

Bear::Bear(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Bear::SkillA() { std::cout << "Bear Skill A" << std::endl; }

void Bear::SkillB() { std::cout << "Bear Skill B" << std::endl; }