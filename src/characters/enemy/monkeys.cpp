#include "monkeys.hpp"

Monkey::Monkey(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

void Monkey::SkillA() { std::cout << "Monkey Skill A" << std::endl; }

void Monkey::SkillB() { std::cout << "Monkey Skill B" << std::endl; }

MonkeyWarrior::MonkeyWarrior(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

void MonkeyWarrior::SkillA() { std::cout << "Monkey Warrior Skill A" << std::endl; }

void MonkeyWarrior::SkillB() { std::cout << "Monkey Warrior Skill B" << std::endl; }

MonkeyHunter::MonkeyHunter(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

void MonkeyHunter::SkillA() { std::cout << "Monkey Hunter Skill A" << std::endl; }

void MonkeyHunter::SkillB() { std::cout << "Monkey Hunter Skill B" << std::endl; }

MonkeyBard::MonkeyBard(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

void MonkeyBard::SkillA() { std::cout << "Monkey Bard Skill A" << std::endl; }

void MonkeyBard::SkillB() { std::cout << "Monkey Bard Skill B" << std::endl; }

MonkeyEngineer::MonkeyEngineer(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

void MonkeyEngineer::SkillA() { std::cout << "Monkey Engineer Skill A" << std::endl; }

void MonkeyEngineer::SkillB() { std::cout << "Monkey Engineer Skill B" << std::endl; }

MonkeyGeneral::MonkeyGeneral(std::string name, double damage, double maxhealth, double defense, double speed)
    : Monkey(name, damage, maxhealth, defense, speed) {}

void MonkeyGeneral::SkillA() { std::cout << "Monkey General Skill A" << std::endl; }

void MonkeyGeneral::SkillB() { std::cout << "Monkey General Skill B" << std::endl; }