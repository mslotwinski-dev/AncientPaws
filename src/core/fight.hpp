#pragma once

#include "../characters/enemy/enemy.hpp"
#include "../characters/entity.hpp"
#include "../characters/hero/hero.hpp"
#include "../functions/basic.hpp"
#include "../inc.hpp"

class App;

class Fight {
  std::vector<Entity *> entities;
  std::vector<Entity *> heroes;
  std::vector<Entity *> enemies;

  Log log;

  App *app;

  bool Kill();
  void Run();
  void Visualize();
  void Sort();

 public:
  Fight(std::vector<Hero *>, std::vector<Enemy *>, App *);
  ~Fight();
};