constexpr qsi::substance qsi::literals::operator""_mol(long double v) {
  return substance(v);
}

constexpr qsi::substance qsi::literals::operator""_mol(unsigned long long v) {
  return substance(v);
}
