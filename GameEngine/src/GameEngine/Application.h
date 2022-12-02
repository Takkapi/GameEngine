#pragma once

#include "Core.h"

namespace GameEngine {

	class GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a Client
	Application* CreateApplication();

}

