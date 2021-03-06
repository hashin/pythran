#ifndef PYTHONIC_INCLUDE_CMATH_E_HPP
#define PYTHONIC_INCLUDE_CMATH_E_HPP

#include "pythonic/utils/functor.hpp"
#include "pythonic/include/types/complex.hpp"

#include <cmath>

namespace pythonic
{

  namespace cmath
  {
    double constexpr e = std::exp(1);
  }
}

#endif
