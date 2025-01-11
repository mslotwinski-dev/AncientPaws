#pragma once
#include "../characters/hero/hero.hpp"
#include "../functions/basic.hpp"
#include "../inc.hpp"

class Story;

class Game {
  std::vector<Hero*> heros;
  Story* story;
  Log log;

 public:
  Game();
  ~Game();

  bool Start();

  std::vector<Hero*> GetHeroes() { return heros; }

  std::vector<std::string> GetNames();
  std::string GetNames(int);
};