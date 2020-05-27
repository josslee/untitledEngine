#pragma once


#ifdef UE_PLATFORM_WINDOWS

extern UntitledEngine::Application* UntitledEngine::CreateApplication();


int main(int argc, char ** argv)
{
	
	auto app = UntitledEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif