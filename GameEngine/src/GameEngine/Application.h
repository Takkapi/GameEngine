#pragma once
#include "Window.h"

#include "Core.h"
#include "Events/Event.h"

namespace GameEngine {

	class GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in a Client
	Application* CreateApplication();

}

