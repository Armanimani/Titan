#include "games/sandbox/application/Application.hpp"
#include <iostream>

namespace game::sandbox
{
}

std::unique_ptr<titan::core::Application> titan::create_titan_application()
{
	return std::make_unique<game::sandbox::Application>();
}