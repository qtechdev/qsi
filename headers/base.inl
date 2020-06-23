#include <ostream>

// constructors
constexpr qsi::base::base(long double v) : value(v) {}
constexpr qsi::base::base(unsigned long long int v) : value(v) {}

// binary arithmetic
template <typename T, typename=qsi::enable_if_qsi<T>>
inline T qsi::operator+(T lhs, const T &rhs) {
  lhs += rhs;
  return lhs;
}

template <typename T, typename=qsi::enable_if_qsi<T>>
inline T qsi::operator-(T lhs, const T &rhs) {
  lhs -= rhs;
  return lhs;
}

template <typename T, typename=qsi::enable_if_qsi<T>>
inline T qsi::operator*(T lhs, const long double rhs) {
  lhs *= rhs;
  return lhs;
}

template <typename T, typename=qsi::enable_if_qsi<T>>
inline T qsi::operator/(T lhs, const long double rhs) {
  lhs /= rhs;
  return lhs;
}

/* ---- output ---- */
template <typename T, typename=qsi::enable_if_qsi<T>>
inline std::ostream &qsi::output::operator<<(std::ostream &os, const T v) {
  os << v.value;
  #ifdef QSI_SHOW_UNIT
  os << " " << v.unit;
  #endif
  return os;
}
