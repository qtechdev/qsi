static constexpr long double ft_to_m = 0.3048;
static constexpr long double in_to_m = 0.0254;

constexpr qsi::length qsi::literals::operator""_m(long double v) {
  return length(v);
}

constexpr qsi::length qsi::literals::operator""_m(unsigned long long v) {
  return length(v);
}

constexpr qsi::length qsi::literals::operator""_ft(long double ft) {
  return {ft * ft_to_m};
}

constexpr qsi::length qsi::literals::operator""_ft(unsigned long long ft) {
  return {ft * ft_to_m};
}

constexpr qsi::length qsi::literals::operator""_in(long double in) {
  return {in * in_to_m};
}

constexpr qsi::length qsi::literals::operator""_in(unsigned long long in) {
  return {in * in_to_m};
}
