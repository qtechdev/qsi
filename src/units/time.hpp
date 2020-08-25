#ifndef __QSI_UNITS_OF_TIME__
#define __QSI_UNITS_OF_TIME__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct time : base {
    static constexpr std::string_view unit = "s";
  };

  inline namespace literals {
    constexpr time operator""_s(long double v);
    constexpr time operator""_s(unsigned long long v);
  }
}

#include "time.inl"

#endif // __QSI_UNITS_OF_TIME__
