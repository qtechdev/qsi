static constexpr long double st_to_kg = 6.35029318;
static constexpr long double lb_to_kg = 0.45359237;

constexpr qsi::mass qsi::literals::operator""_kg(long double v) {
  return mass(v);
}

constexpr qsi::mass qsi::literals::operator""_kg(unsigned long long v) {
  return mass(v);
}

constexpr qsi::mass qsi::literals::operator""_st(long double st) {
  return mass(st * st_to_kg);
}

constexpr qsi::mass qsi::literals::operator""_st(unsigned long long st) {
  return mass(st * st_to_kg);
}

constexpr qsi::mass qsi::literals::operator""_lb(long double lb) {
  return mass(lb * lb_to_kg);
}

constexpr qsi::mass qsi::literals::operator""_lb(unsigned long long lb) {
  return mass(lb * lb_to_kg);
}
