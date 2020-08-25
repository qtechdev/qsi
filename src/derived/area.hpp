#ifndef __QSI_UNITS_OF_AREA__
#define __QSI_UNITS_OF_AREA__
#include <string_view>

#include "../base.hpp"
#include "../units/length.hpp"

namespace qsi {
  struct area : base {
    static constexpr std::string_view unit = "m^2";
  };

  inline area operator*(length lhs, const length &rhs);

  inline namespace literals {
    constexpr area operator""_m2(long double v);
    constexpr area operator""_m2(unsigned long long v);
  }
}

#include "area.inl"

#endif // __QSI_UNITS_OF_AREA__
