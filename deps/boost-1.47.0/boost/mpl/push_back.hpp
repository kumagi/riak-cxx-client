
#ifndef BOOST_MPL_PUSH_BACK_HPP_INCLUDED
#define BOOST_MPL_PUSH_BACK_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: push_back.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
// $Date: 2008-10-11 02:19:02 -0400 (Sat, 11 Oct 2008) $
// $Revision: 49267 $

#include <boost/mpl/push_back_fwd.hpp>
#include <boost/mpl/aux_/push_back_impl.hpp>
#include <boost/mpl/sequence_tag.hpp>
#include <boost/mpl/aux_/na_spec.hpp>
#include <boost/mpl/aux_/lambda_support.hpp>

namespace riakboost{} namespace boost = riakboost; namespace riakboost{ namespace mpl {

template<
      typename BOOST_MPL_AUX_NA_PARAM(Sequence)
    , typename BOOST_MPL_AUX_NA_PARAM(T)
    >
struct push_back
    : push_back_impl< typename sequence_tag<Sequence>::type >
        ::template apply< Sequence,T >
{
    BOOST_MPL_AUX_LAMBDA_SUPPORT(2,push_back,(Sequence,T))
};


template< 
      typename BOOST_MPL_AUX_NA_PARAM(Sequence)
    >
struct has_push_back
    : has_push_back_impl< typename sequence_tag<Sequence>::type >
        ::template apply< Sequence >
{
    BOOST_MPL_AUX_LAMBDA_SUPPORT(1,has_push_back,(Sequence))
};


BOOST_MPL_AUX_NA_SPEC(2, push_back)
BOOST_MPL_AUX_NA_SPEC(1, has_push_back)

}}

#endif // BOOST_MPL_PUSH_BACK_HPP_INCLUDED