constexpr qsi::current qsi::literals::operator""_A(long double v) {
  return current(v);
}

constexpr qsi::current qsi::literals::operator""_A(unsigned long long v) {
  return current(v);
}
