#pragma once

#include "core/game.hpp"
#include "functions/basic.hpp"
#include "inc.hpp"

class App {
  Game game;
  Log log;

 public:
  App();
  ~App() {}

  void Start();
  void Play();
  void Menu();
  void Author();
  void Finish();
};