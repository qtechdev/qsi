#include "base.hpp"

// copy and swap
qsi::base &qsi::base::operator=(qsi::base rhs) noexcept {
  std::swap(value, rhs.value);
  return *this;
}

// inc/dec
qsi::base &qsi::base::operator++() {
  value++;
  return *this;
}

qsi::base qsi::base::operator++(int) {
  base tmp{value};
  operator++();
  return tmp;
}

qsi::base &qsi::base::operator--() {
  value--;
  return *this;
}

qsi::base qsi::base::operator--(int) {
  base tmp{value};
  operator--();
  return tmp;
}

// compound assignment
qsi::base &qsi::base::operator+=(const qsi::base &rhs) {
  value += rhs.value;
  return *this;
}

qsi::base &qsi::base::operator-=(const qsi::base &rhs) {
  value -= rhs.value;
  return *this;
}

qsi::base &qsi::base::operator*=(const long double &rhs) {
  value *= rhs;
  return *this;
}

qsi::base &qsi::base::operator/=(const long double &rhs) {
  value /= rhs;
  return *this;
}

// negation
qsi::base qsi::base::operator-() const {
  base x;
  x.value = -value;
  return x;
}
