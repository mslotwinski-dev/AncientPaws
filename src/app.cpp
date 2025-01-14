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
  game.BindApp(this);
  game.Start();
}

void App::Finish() {
  log.Print("Koniec!", RED);
  log.Notice("Autor", "Mateusz Słotwiński", CYAN);

  int pick = Pick("Zagraj ponownie", "Zakończ");
  log.Clear();

  switch (pick) {
    case 1: {
      Game newGame;
      game = newGame;
      Start();
    };
    case 2: {
      log.Print("Dziękuję za grę <3");
      exit(0);
    };
  }
}

void App::Menu() {
  log.Notice("System walki",
             "Walka jest turowa. Zarówno ty jak i każdy przeciwnik posiadacie unikalny zestaw umiejętności.");

  log.Print(
      "Zabicie przeciwnika otrzeźwia obie drużyny. Gdy ktoś zginie od razu cios zadaje najszybszy, a kolejka idzie od "
      "początku nie ważne kogo kolej była po zadającym cios.");

  log.Notice("Przetrwanie",
             "Chcąc wygrać grę musisz dbać o zdrowię, wytrzymałość i stres. To pierwsze odnowić można umiejętnościami "
             "i niektórymi wydarzeniami w grze. ");
  log.Print(
      "Wytrzymałość tracimy używając umiejętności. Gdy walka jest długa czasem konieczna może być chwila "
      "odpoczynku. Zawsze odnawia się na początku walki.");
  log.Print(
      "Nasi przyjaciele stresują się gdy doznają ran. Stres odnawia się sam z biegiem gry, ale znacznie ciężej z nim "
      "walczyć.");
  log.Print("Nie pozwól, aby zwierzątka straciły motywację, bo samotny powrót jest bardzo niebezpieczny...");
  log.Press();
  Start();
}

void App::Author() {
  log.Notice("Autor", "Mateusz Słotwiński", CYAN);
  // log.Notice("Inspiracja", "Maniakulka", MAGENTA);

  log.Press();
  Start();
}

void App::Start() {
  int pick = Pick("Graj", "Zasady gry", "Autor", "Zakończ");

  switch (pick) {
    case 1: Play();
    case 2: Menu();
    case 3: Author();
    case 4: break;
  }
}