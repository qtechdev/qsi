#ifndef __QSI_UNITS_OF_TEMPERATURE__
#define __QSI_UNITS_OF_TEMPERATURE__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct temperature : base {
    static constexpr std::string_view unit = "K";
  };

  inline namespace literals {
    constexpr temperature operator""_K(long double v);
    constexpr temperature operator""_K(unsigned long long v);
  }
}

#include "temperature.inl"

#endif // __QSI_UNITS_OF_TEMPERATURE__
