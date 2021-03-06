//==============================================================================
//         Copyright 2003 - 2011 LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011 LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_SWAR_FUNCTIONS_COMPLEX_SIMD_COMMON_CUMSUM_HPP_INCLUDED
#define NT2_SWAR_FUNCTIONS_COMPLEX_SIMD_COMMON_CUMSUM_HPP_INCLUDED

#include <nt2/swar/functions/cumsum.hpp>
#include <nt2/include/functions/aligned_load.hpp>
#include <nt2/include/functions/aligned_store.hpp>
#include <boost/simd/preprocessor/aligned_type.hpp>
#include <boost/simd/sdk/meta/cardinal_of.hpp>
#include <boost/simd/sdk/meta/scalar_of.hpp>
#include <nt2/sdk/complex/meta/as_complex.hpp>
#include <nt2/sdk/complex/meta/as_real.hpp>
#include <nt2/sdk/complex/meta/as_dry.hpp>
#include <nt2/include/functions/imag.hpp>
#include <nt2/include/functions/real.hpp>

#include <algorithm>

/////////////////////////////////////////////////////////////////////////////
// Implementation when type A0 is arithmetic_
/////////////////////////////////////////////////////////////////////////////
namespace nt2 { namespace ext
{
  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::cumsum_, tag::cpu_
                            , (A0)(X)
                            , ((simd_<complex_<arithmetic_<A0> >,X>))
                            )
  {
    typedef A0 result_type;
    NT2_FUNCTOR_CALL(1)
    {
      return result_type(cumsum(nt2::real(a0)), cumsum(nt2::imag(a0)));
    }
  };

  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::cumsum_, tag::cpu_
                                     , (A0)(X)
                                     , ((simd_<dry_<arithmetic_<A0> >,X>))
                                     )
  {
    typedef A0 result_type;
    NT2_FUNCTOR_CALL(1)
      {
        return result_type(cumsum(nt2::real(a0)));
      }
  };
} }


#endif
