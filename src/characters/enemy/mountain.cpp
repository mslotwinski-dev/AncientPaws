#include "mountain.hpp"

Puma::Puma(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Puma::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Puma::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Fox::Fox(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Fox::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Fox::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Bear::Bear(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Bear::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Bear::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }