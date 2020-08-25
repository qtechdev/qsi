#ifndef __QSI_DERIVED_UNIT_VELOCITY__
#define __QSI_DERIVED_UNIT_VELOCITY__
#include <string_view>

#include "base.hpp"
#include "units/length.hpp"
#include "units/time.hpp"

namespace qsi {
  struct velocity : base {
    static constexpr std::string_view unit = "m/s";
  };

  inline velocity operator/(length lhs, const time &rhs) {
    return velocity(lhs.value / rhs.value);
  }
};

#endif // __QSI_DERIVED_UNIT_VELOCITY__
