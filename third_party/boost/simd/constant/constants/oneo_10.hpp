//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_CONSTANT_CONSTANTS_ONEO_10_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_CONSTANTS_ONEO_10_HPP_INCLUDED

#include <boost/simd/include/functor.hpp>
#include <boost/simd/constant/register.hpp>
#include <boost/simd/constant/hierarchy.hpp>


namespace boost { namespace simd
{
  namespace tag
  {
   /*!
     @brief Oneo_10 generic tag

     Represents the Oneo_10 constant in generic contexts.

     @par Models:
        Hierarchy
   **/
    BOOST_SIMD_CONSTANT_REGISTER( Oneo_10, double, 0
                                , 0x3dcccccd, 0x3fb999999999999all
                                )
  }
  /*!
    Generates value 1/10

    @par Semantic:

    @code
    T r = Oneo_10<T>();
    @endcode

    is similar to:

    @code
    T r = T(1)/T(10);
    @endcode
  **/
  BOOST_SIMD_CONSTANT_IMPLEMENTATION(boost::simd::tag::Oneo_10, Oneo_10)
} }

#include <boost/simd/constant/common.hpp>

#endif

