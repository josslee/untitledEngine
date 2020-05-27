

#include <UntitledEngine.h>

class Sandbox : public UntitledEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

UntitledEngine::Application* UntitledEngine::CreateApplication()
{
	return new Sandbox();
}