#include "sea.hpp"

Shark::Shark(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Shark::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Shark::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Squid::Squid(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Squid::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Squid::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

Whale::Whale(std::string name, double damage, double maxhealth, double defense, double speed)
    : Enemy(name, damage, maxhealth, defense, speed) {}

std::string Whale::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) { return "A"; }

std::string Whale::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }