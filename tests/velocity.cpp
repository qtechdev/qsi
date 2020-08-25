#include <iostream>
#include <sstream>
#include <string_view>

#define QSI_SHOW_UNIT
#include "base.hpp"
#include "units.hpp"
#include "derived.hpp"

#include "velocity.hpp"

constexpr std::string_view expected = {
  "distance == 30.48 m\n"
  "time     == 1 s\n"
  "velocity == 30.48 m/s\n"
};

int main() {
  std::cout << "+----------------------------------------------------------\n";
  std::cout << "| expected output:\n";
  std::cout << expected;
  std::cout << "\n";

  using namespace qsi::output;
  using namespace qsi::literals;

  auto distance = 100_ft;
  auto time = 1_s;
  auto velocity = distance / time;

  std::stringstream ss;
  ss << "distance == " << distance << "\n";
  ss << "time     == " << time << "\n";
  ss << "velocity == " << velocity << "\n";

  std::cout << ss.str();

  return !(ss.str() == expected);
}
