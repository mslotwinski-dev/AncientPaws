#include "sea.hpp"

Shark::Shark(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Shark::SkillA() { std::cout << "Shark Skill A" << std::endl; }

void Shark::SkillB() { std::cout << "Shark Skill B" << std::endl; }

Squid::Squid(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Squid::SkillA() { std::cout << "Squid Skill A" << std::endl; }

void Squid::SkillB() { std::cout << "Squid Skill B" << std::endl; }

Whale::Whale(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Whale::SkillA() { std::cout << "Whale Skill A" << std::endl; }

void Whale::SkillB() { std::cout << "Whale Skill B" << std::endl; }