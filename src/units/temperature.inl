constexpr qsi::temperature qsi::literals::operator""_K(long double v) {
  return temperature(v);
}

constexpr qsi::temperature qsi::literals::operator""_K(unsigned long long v) {
  return temperature(v);
}
