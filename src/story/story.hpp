#pragma once
#include "../core/game.hpp"
#include "../functions/basic.hpp"
#include "../inc.hpp"

class Game;

class Story {
  int chapter;
  Log log;

  Game* game;

  void Read();
  void Continue();

 public:
  Story(Game* game);
  ~Story() {}

  void Next();
};