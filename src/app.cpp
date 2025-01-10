#include "app.hpp"

App::App() : game(), log() {
  log.PrintStory("To historia z życia wzięta, a zaczyna się tak");
  log.Print("Ancient Paws", RED);
  log.Print("by Mateusz Słotwiński", CYAN);

  log.Press();
  Start();
}

void App::Play() {
  game.Start();
}

void App::Menu() {
  log.Print("Tymczasowo brak ustawień");
  log.Press();
  Start();
}

void App::Author() {
  log.Notice("Autor", "Mateusz Słotwiński", CYAN);
  log.Notice("Inspiracja", "Maniakulkazb", MAGENTA);

  log.Press();
  Start();
}


void App::Start() {
  int pick = Pick("Graj", "Opcje", "Autor", "Zakończ");

  switch(pick) {
    case 1: { Play(); break;}
    case 2: { Menu(); break; }
    case 3: { Author(); break; }
    case 4: { break; }
  }

}