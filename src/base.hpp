#ifndef __QSI_BASE_HPP__
#define __QSI_BASE_HPP__
#include <ostream>
#include <string_view>

namespace qsi {
  struct base;
  template <typename T>
  using enable_if_qsi = std::enable_if_t<std::is_base_of<base, T>::value>;

  struct base {
    long double value;
    static constexpr std::string_view unit = "";

    // constructors
    base() = default;
    constexpr base(long double v);
    constexpr base(unsigned long long int v);

    // copy and swap
    base &operator=(base rhs) noexcept;

    // inc/dec
    base &operator++();
    base operator++(int);
    base &operator--();
    base operator--(int);

    // compound assignment
    base &operator+=(const base &rhs);
    base &operator-=(const base &rhs);
    base &operator*=(const long double &rhs);
    base &operator/=(const long double &rhs);

    // comparison (c++20 auto generated)
    auto operator<=>(const base &) const = default;

    // negation
    base operator-() const;
  };

  // binary arithmetic
  template <typename T, typename=enable_if_qsi<T>>
  inline T operator+(T lhs, const T &rhs);
  template <typename T, typename=enable_if_qsi<T>>
  inline T operator-(T lhs, const T &rhs);
  template <typename T, typename=enable_if_qsi<T>>
  inline T operator*(T lhs, const long double rhs);
  template <typename T, typename=enable_if_qsi<T>>
  inline T operator/(T lhs, const long double rhs);

  /* ---- output ---- */
  inline namespace output {
    template <typename T, typename=enable_if_qsi<T>>
    inline std::ostream &operator<<(std::ostream &os, const T v);
  }

  inline namespace literals {}
}

#include "base.inl"

#endif // __QSI_BASE_HPP__
