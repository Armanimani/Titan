#pragma once

#ifdef TITAN_PLATFORM_WINDOWS
	#ifdef TITAN_BUILD_DLL
		#define TITAN_API __declspec(dllexport)
	#else
		#define TITAN_API __declspec(dllimport)
	#endif
#else
	#error Titan only supports Windows platform (for now)!
#endif

#ifdef TITAN_BUILD_DEBUG
	#define TITAN_DEBUG
#endif