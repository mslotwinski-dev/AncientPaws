#pragma once
#include "enemy.hpp"

class Anteater : public Enemy {
 public:
  Anteater(std::string, double, double, double, double);
  ~Anteater() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Harpy : public Enemy {
 public:
  Harpy(std::string, double, double, double, double);
  ~Harpy() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Hawk : public Enemy {
 public:
  Hawk(std::string, double, double, double, double);
  ~Hawk() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Weasel : public Enemy {
  Weasel(std::string, double, double, double, double);
  ~Weasel() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Snake : public Enemy {
  Snake(std::string, double, double, double, double);
  ~Snake() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Cayman : public Enemy {
  Cayman(std::string, double, double, double, double);
  ~Cayman() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};