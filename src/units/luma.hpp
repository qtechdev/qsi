#ifndef __QSI_UNITS_OF_LUMA__
#define __QSI_UNITS_OF_LUMA__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct luma : base {
    static constexpr std::string_view unit = "cd";
  };

  inline namespace literals {
    constexpr luma operator""_cd(long double v);
    constexpr luma operator""_cd(unsigned long long v);
  }
}

#include "luma.inl"

#endif // __QSI_UNITS_OF_LUMA__
