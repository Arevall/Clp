/* $Id: CoinAbcFactorization4.cpp 1373 2011-01-03 23:57:44Z lou $ */
// Copyright (C) 2002, International Business Machines
// Corporation and others, Copyright (C) 2012, FasterCoin.  All Rights Reserved.
// This code is licensed under the terms of the Eclipse Public License (EPL).

#if CLP_HAS_ABC
#include "CoinAbcCommonFactorization.hpp"
#ifndef ABC_JUST_ONE_FACTORIZATION
#define CoinAbcTypeFactorization CoinAbcFactorization
#define ABC_SMALL -1
#include "CoinAbcBaseFactorization.hpp"
#include "CoinAbcBaseFactorization4.cpp"
#endif
#endif