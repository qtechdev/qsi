inline qsi::area_density qsi::operator/(mass lhs, const area &rhs) {
  return area_density(lhs.value / rhs.value);
}

constexpr qsi::area_density qsi::literals::operator""_kgm2(long double v) {
  return area_density(v);
}

constexpr qsi::area_density qsi::literals::operator""_kgm2(unsigned long long v) {
  return area_density(v);
}
