#pragma once

#ifdef FRINGE_PLATFORM_WINDOWS
	#ifdef FRINGE_BUILD_DLL
		#define FRINGE_API __declspec(dllexport)
	#else
		#define FRINGE_API __declspec(dllimport)
#else
	#error Fringe only supports Windows rn!
#endif