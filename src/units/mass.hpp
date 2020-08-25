#ifndef __QSI_UNITS_OF_MASS__
#define __QSI_UNITS_OF_MASS__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct mass : base {
    static constexpr std::string_view unit = "kg";
  };

  inline namespace literals {
    constexpr mass operator""_kg(long double v);
    constexpr mass operator""_kg(unsigned long long v);

    constexpr mass operator""_st(long double st);
    constexpr mass operator""_st(unsigned long long st);
    constexpr mass operator""_lb(long double lb);
    constexpr mass operator""_lb(unsigned long long lb);
  }
}

#include "mass.inl"

#endif // __QSI_UNITS_OF_MASS__
