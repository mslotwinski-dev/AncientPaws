#pragma once
#include "../../inc.hpp"
#include "log.hpp"

int Validate(std::vector<std::string>);

template <typename... Args>
int Pick(Args... args) {
  std::vector<std::string> a{([](const auto& value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
  }(args))...};

  int v = Validate(a);

  // Log log;
  // log.Clear(1);

  return v;
}
