#ifndef __QSI_UNITS_OF_SUBSTANCE__
#define __QSI_UNITS_OF_SUBSTANCE__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct substance : base {
    static constexpr std::string_view unit = "mol";
  };

  inline namespace literals {
    constexpr substance operator""_mol(long double v);
    constexpr substance operator""_mol(unsigned long long v);
  }
}

#include "substance.inl"

#endif // __QSI_UNITS_OF_SUBSTANCE__
