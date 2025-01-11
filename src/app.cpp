#include "app.hpp"

App::App() : game(), log() {
  SetConsoleOutputCP(CP_UTF8);
  system("cls");

  log.PrintStory("To historia z życia wzięta, a zaczyna się tak");
  log.Print("Ancient Paws", RED);
  log.Print("by Mateusz Słotwiński", CYAN);

  log.Press();
  Start();
}

void App::Play() {
  if (game.Start()) {
    Finish();
  }
}

void App::Finish() {
  log.Print("Koniec!", RED);
  log.Notice("Autor", "Mateusz Słotwiński", CYAN);

  int pick = Pick("Zagraj ponownie", "Zakończ");
  log.Clear();
  switch (pick) {
    case 1: Start();
    case 2: exit(0);
  }
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

  switch (pick) {
    case 1: Play();
    case 2: Menu();
    case 3: Author();
    case 4: break;
  }
}