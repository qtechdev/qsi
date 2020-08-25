#ifndef __QSI_UNITS_OF_LENGTH__
#define __QSI_UNITS_OF_LENGTH__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct length : base {
    static constexpr std::string_view unit = "m";
  };

  inline namespace literals {
    constexpr length operator""_m(long double v);
    constexpr length operator""_m(unsigned long long v);

    constexpr length operator""_ft(long double ft);
    constexpr length operator""_ft(unsigned long long ft);
    constexpr length operator""_in(long double in);
    constexpr length operator""_in(unsigned long long in);
  }
}

#include "length.inl"

#endif // __QSI_UNITS_OF_LENGTH__
