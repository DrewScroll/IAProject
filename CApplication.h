#pragma once
#include "CWorld.h"
class CApplication
{
public:
	CApplication();
	~CApplication();

	void initialize();
	void update();
	void render();
	void destroy();
};

