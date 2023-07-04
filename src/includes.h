#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <Windows.h>

using std::cout, std::endl, std::tuple,
      std::string, std::vector;

// cocos2d
#pragma warning(push, 0)
#include <cocos2d.h>
#include <cocos-ext.h>
#pragma warning(pop)

using namespace cocos2d;

// gd.h
#include "gd.h/include/gd.h"

using namespace gd;

// minhook
#include "minhook/include/MinHook.h"

// json lib
#pragma warning(push, 0)
#include "json/json.hpp"
#pragma warning(pop)

using namespace nlohmann;

// #define GDL_INDEV