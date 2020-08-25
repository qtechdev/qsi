#include <iostream>
#include <sstream>
#include <string_view>

#define QSI_SHOW_UNIT
#include "base.hpp"
#include "units.hpp"
#include "derived.hpp"

constexpr std::string_view expected = {
  "SI Base Units\n"
  "electrical current         == 1 A\n"
  "length                     == 1 m\n"
  "luminous intensity         == 1 cd\n"
  "mass                       == 1 kg\n"
  "amount of substance        == 1 mol\n"
  "thermodynamic temperature  == 1 K\n"
  "time                       == 1 s\n"
};

int main() {
  std::cout << "+----------------------------------------------------------\n";
  std::cout << "| expected output:\n";
  std::cout << expected;
  std::cout << "\n";

  using namespace qsi::output;
  using namespace qsi::literals;

  auto current = 1_A;
  auto length = 1_m;
  auto luma = 1_cd;
  auto mass = 1_kg;
  auto substance = 1_mol;
  auto temperature = 1_K;
  auto time = 1_s;

  std::stringstream ss;
  ss << "SI Base Units\n";
  ss << "electrical current         == "<< current << "\n";
  ss << "length                     == "<< length << "\n";
  ss << "luminous intensity         == "<< luma << "\n";
  ss << "mass                       == "<< mass << "\n";
  ss << "amount of substance        == "<< substance << "\n";
  ss << "thermodynamic temperature  == "<< temperature << "\n";
  ss << "time                       == "<< time << "\n";

  std::cout << ss.str();

  return !(ss.str() == expected);
}
