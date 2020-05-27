#pragma once


#ifdef UE_PLATFORM_WINDOWS
	#ifdef UE_BUILD_DLL
		#define UNTITLEDENGINE_API __declspec(dllexport)
	#else
		#define UNTITLEDENGINE_API __declspec(dllimport)
	#endif
#else
#error Untitled Engine only supports Windows!
#endif