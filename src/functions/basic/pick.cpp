#include "pick.hpp"

int Validate(std::vector<std::string> a) {
  bool failed = false;
  int v;
  Log log;

  while (true) {
    if (failed) {
      log.Clear(1);
      log.Print("Wybierz poprawny numer of 1 do " + std::to_string(a.size()));
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    log.Instant("Wybierz opcję");
    for (int i = 0; i < a.size(); i++) {
      log.PrintN(i + 1, a[i]);
    }

    if (!(std::cin >> v) || v < 1 || v > a.size()) {
      failed = true;
      continue;
    }

    break;
  }

  log.Clear(1);

  return v;
}
