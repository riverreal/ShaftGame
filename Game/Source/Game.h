#pragma once

#include <Shaft/Application.h>

class Game : public Shaft::Application
{
public:
	Game();
	~Game();

protected:
	virtual void AppInit() override;
	virtual void AppRun() override;
};