#ifndef _SCTL_MATH_UTILS_
#define _SCTL_MATH_UTILS_

#include SCTL_INCLUDE(common.hpp)

#include <cmath>
#include <ostream>

namespace SCTL_NAMESPACE {

template <class Real> Real machine_eps();

template <class Real> Real atoreal(const char* str);

template <class Real> inline constexpr Real const_pi() { return (Real)3.1415926535897932384626433832795028841L; }

template <class Real> inline constexpr Real const_e() { return (Real)2.7182818284590452353602874713526624977L; }

template <class Real> inline constexpr Real fabs(const Real a) { return (Real)::fabs(a); }

template <class Real> inline constexpr Real sqrt(const Real a) { return (Real)::sqrt(a); }

template <class Real> inline constexpr Real sin(const Real a) { return (Real)::sin(a); }

template <class Real> inline constexpr Real cos(const Real a) { return (Real)::cos(a); }

template <class Real> inline constexpr Real exp(const Real a) { return (Real)::exp(a); }

template <class Real> inline constexpr Real log(const Real a) { return (Real)::log(a); }

template <class Real, class ExpType> inline Real pow(const Real b, const ExpType e);

template <Long e, class ValueType> inline constexpr ValueType pow(ValueType b);

}  // end namespace

#ifdef SCTL_QUAD_T

namespace SCTL_NAMESPACE {

typedef SCTL_QUAD_T QuadReal;

inline std::ostream& operator<<(std::ostream& output, const QuadReal q_);

}

inline std::ostream& operator<<(std::ostream& output, const SCTL_QUAD_T q_);

#endif  // SCTL_QUAD_T

#include SCTL_INCLUDE(math_utils.txx)

#endif  //_SCTL_MATH_UTILS_HPP_
