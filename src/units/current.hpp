#ifndef __QSI_UNITS_OF_CURRENT__
#define __QSI_UNITS_OF_CURRENT__
#include <string_view>

#include "../base.hpp"

namespace qsi {
  struct current : base {
    static constexpr std::string_view unit = "A";
  };

  inline namespace literals {
    constexpr current operator""_A(long double v);
    constexpr current operator""_A(unsigned long long v);
  }
}

#include "current.inl"

#endif // __QSI_UNITS_OF_CURRENT__
