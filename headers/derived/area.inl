inline qsi::area qsi::operator*(length lhs, const length &rhs) {
  return area(lhs.value * rhs.value);
}

constexpr qsi::area qsi::literals::operator""_m2(long double v) {
  return area(v);
}

constexpr qsi::area qsi::literals::operator""_m2(unsigned long long v) {
  return area(v);
}
