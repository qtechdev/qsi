constexpr qsi::time qsi::literals::operator""_s(long double v) {
  return time(v);
}

constexpr qsi::time qsi::literals::operator""_s(unsigned long long v) {
  return time(v);
}
