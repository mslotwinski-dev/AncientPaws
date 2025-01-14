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
 public:
  Weasel(std::string = "Łasica", double = 22, double = 130, double = 0, double = 5);
  ~Weasel() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Snake : public Enemy {
 public:
  Snake(std::string, double, double, double, double);
  ~Snake() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Cayman : public Enemy {
 public:
  Cayman(std::string, double, double, double, double);
  ~Cayman() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};