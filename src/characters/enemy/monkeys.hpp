#pragma once
#include "enemy.hpp"

class Monkey : public Enemy {
 public:
  Monkey(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~Monkey() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class MonkeyWarrior : public Monkey {
 public:
  MonkeyWarrior(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyWarrior() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class MonkeyHunter : public Monkey {
 public:
  MonkeyHunter(std::string = "Małpa Łowca", double = 14, double = 45, double = 0, double = 13);
  ~MonkeyHunter() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class MonkeyBard : public Monkey {
 public:
  MonkeyBard(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyBard() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class MonkeyEngineer : public Monkey {
 public:
  MonkeyEngineer(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyEngineer() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class MonkeyGeneral : public Monkey {
 public:
  MonkeyGeneral(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyGeneral() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};