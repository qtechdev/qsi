#include <iostream>
#include <sstream>
#include <string_view>

#define QSI_SHOW_UNIT
#include "base.hpp"
#include "units.hpp"
#include "derived.hpp"

constexpr std::string_view expected = {
  "weight == 100 kg\n"
  "height == 1.8 m\n"
  "bmi    == 30.8642 kg/m^2\n"
};

int main() {
  std::cout << "+----------------------------------------------------------\n";
  std::cout << "| expected output:\n";
  std::cout << expected;
  std::cout << "\n";

  using namespace qsi::output;
  using namespace qsi::literals;

  auto weight = 100_kg;
  auto height = 1.8_m;
  auto bmi = weight / (height * height);

  std::stringstream ss;
  ss << "weight == " << weight << "\n";
  ss << "height == " << height << "\n";
  ss << "bmi    == " << bmi << "\n";

  std::cout << ss.str();

  return !(ss.str() == expected);
}
