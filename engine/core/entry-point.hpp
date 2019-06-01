#pragma once

#include <memory>

extern std::unique_ptr<titan::core::Application> titan::create_titan_application();

#ifdef TITAN_PLATFORM_WINDOWS
	int main(int argc, char** argv)
	{
		auto application = titan::create_titan_application();
		application->run();
	}
#else
	#error Titan only supports Windows platform (for now)!
#endif