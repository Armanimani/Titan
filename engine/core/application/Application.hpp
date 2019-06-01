#pragma once

#include "engine/core/common.hpp"
#include <memory>

namespace titan::core
{
	class TITAN_API Application
	{
	public:
		Application() = default;

		Application(const Application&) = delete;
		Application(Application&&) = delete;
		Application operator=(const Application&) = delete;
		Application operator=(Application&&) = delete;

		void run();
		virtual ~Application() = default;
	};
}

namespace titan
{
	std::unique_ptr<titan::core::Application> create_titan_application();
}
