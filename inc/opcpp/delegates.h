///****************************************************************
/// Copyright � 2008 opGames LLC - All Rights Reserved
///
/// Authors: Kevin Depue & Lucas Ellis
///
/// File: Delegates.h
/// Date: 10/05/2007
///
/// Description:
///
/// Delegate Types
///****************************************************************

#pragma once

#include <boost/bind.hpp>
#include <boost/function.hpp>

namespace delegates {
typedef boost::function<opNode*(const opString& modifiername)> ModifierDelegate;
}
