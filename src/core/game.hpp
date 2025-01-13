#pragma once
#include "../characters/enemy/monkeys.hpp"
#include "../characters/hero/hero.hpp"
#include "../functions/basic.hpp"
#include "../inc.hpp"
#include "fight.hpp"

class Story;
class App;

class Game {
  std::vector<Hero*> heroes;
  Story* story;
  Log log;
  App* app;

 public:
  Game();
  ~Game();

  void Start();

  inline void BindApp(App* app) { this->app = app; }
  inline std::vector<Hero*> GetHeroes() { return heroes; }

  std::vector<std::string> GetNames();
  std::string GetNames(int);
};