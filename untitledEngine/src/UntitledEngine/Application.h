#pragma once
#include "Core.h"

namespace UntitledEngine {

	class UNTITLEDENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//to be defined in CLIENT
	Application* CreateApplication();
}

