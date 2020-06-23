#ifndef __QSI_UNITS_OF_AREA_DENSITY__
#define __QSI_UNITS_OF_AREA_DENSITY__
#include <string_view>

#include "area.hpp"
#include "../base.hpp"
#include "../units/mass.hpp"

namespace qsi {
  struct area_density : base {
    static constexpr std::string_view unit = "kg/m^2";
  };

  inline area_density operator/(mass lhs, const area &rhs);

  inline namespace literals {
    constexpr area_density operator""_kgm2(long double v);
    constexpr area_density operator""_kgm2(unsigned long long v);
  };
};

#include "area_density.inl"

#endif // __QSI_UNITS_OF_AREA_DENSITY__
