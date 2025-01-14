#include "log.hpp"

#ifdef _WIN32
#else
int getch() {  // ?? Pan internet tak powiedział nie wiem skąd to
  struct termios oldt, newt;
  int ch;
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  return ch;
}
#endif

std::string Log::Color(Colors i) {
  switch (i) {
    case RED: return "\033[31m";      // Czerwony
    case GREEN: return "\033[32m";    // Zielony
    case YELLOW: return "\033[33m";   // Żółty
    case BLUE: return "\033[34m";     // Niebieski
    case MAGENTA: return "\033[35m";  // Fioletowy
    case CYAN: return "\033[36m";     // Cyjan
    case NONE: return "\033[37m";     // Biały
    default: return "";               // Brak koloru (domyślny)
  }
}

void Log::Print(std::string v, Colors i) {
  lines++;

  std::this_thread::sleep_for(std::chrono::milliseconds(50));
  std::string color = "";
  color = Color(i);

  std::cout << color;
  for (char c : v) {
    std::cout << c << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(3));
  }
  std::cout << "\033[0m" << std::endl;
}

void Log::PrintN(int n, std::string v) {
  lines++;
  std::cout << n << ". " << v << std::endl;
}

void Log::Clear(int n) {
  for (int i = 0; i < lines + n; i++) {
    std::cout << "\033[A\033[K";
  }
  lines = 0;
}

void Log::Press(int n) {
  Print("Wciśnij dowolny klawisz, aby kontynuować...");
#ifdef _WIN32
  _getch();
#else
  getch();
#endif

  Clear(n);
}

void Log::Notice(std::string v, std::string w, Colors i) {
  lines++;
  std::string color = "";
  color = Color(i);

  std::cout << color << v << "\033[0m" << ": ";

  for (char c : w) {
    std::cout << c << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(3));
  }

  std::cout << std::endl;
}

void Log::PrintStory(std::string n) {
  lines++;

  bool dev = false;

  std::srand(std::time(nullptr));
  int minDelayMs = 10;
  int maxDelayMs = 60;

  if (dev) {
    minDelayMs /= 100;
    maxDelayMs /= 100;
  }
  std::cout << "\033[3m";

  for (char c : n) {
    std::cout << c << std::flush;

    int delayMs = minDelayMs + (std::rand() % (maxDelayMs - minDelayMs + 1));

    std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
  }
  std::this_thread::sleep_for(std::chrono::milliseconds(200));
  std::cout << "\033[0m" << std::endl;
}

void Log::Instant(std::string v, Colors i) {
  lines++;
  std::string color = Color(i);

  std::cout << color << v << "\033[0m" << std::endl;
}

void Log::Reset() { std::cout << "\033[0m"; }

void Log::ClearOne() {
  std::cout << "\033[A\033[K";
  lines--;
}