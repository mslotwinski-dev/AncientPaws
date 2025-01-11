#include "forest.hpp"

Anteater::Anteater(std::string name, double damage, double maxhealth, double defense, double speed) : Enemy(name, damage, maxhealth, defense, speed) {}

void Anteater::SkillA() { std::cout << "Anteater Skill A" << std::endl; }

void Anteater::SkillB() { std::cout << "Anteater Skill B" << std::endl; }

Harpy::Harpy(std::string name, double damage, double maxhealth, double defense, double speed) : Enemy(name, damage, maxhealth, defense, speed) {}

void Harpy::SkillA() { std::cout << "Harpy Skill A" << std::endl; }

void Harpy::SkillB() { std::cout << "Harpy Skill B" << std::endl; }

Hawk::Hawk(std::string name, double damage, double maxhealth, double defense, double speed) : Enemy(name, damage, maxhealth, defense, speed) {}

void Hawk::SkillA() { std::cout << "Hawk Skill A" << std::endl; }

void Hawk::SkillB() { std::cout << "Hawk Skill B" << std::endl; }

Weasel::Weasel(std::string name, double damage, double maxhealth, double defense, double speed) : Enemy(name, damage, maxhealth, defense, speed) {}

void Weasel::SkillA() { std::cout << "Weasel Skill A" << std::endl; }

void Weasel::SkillB() { std::cout << "Weasel Skill B" << std::endl; }

Snake::Snake(std::string name, double damage, double maxhealth, double defense, double speed) : Enemy(name, damage, maxhealth, defense, speed) {}

void Snake::SkillA() { std::cout << "Snake Skill A" << std::endl; }

void Snake::SkillB() { std::cout << "Snake Skill B" << std::endl; }

// Implementacja klasy Cayman
Cayman::Cayman(std::string name, double damage, double maxhealth, double defense, double speed) : Enemy(name, damage, maxhealth, defense, speed) {}

void Cayman::SkillA() { std::cout << "Cayman Skill A" << std::endl; }

void Cayman::SkillB() { std::cout << "Cayman Skill B" << std::endl; }