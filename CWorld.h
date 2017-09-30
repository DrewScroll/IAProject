#pragma once
#include "CGameObject.h"
class CWorld
{
public:
	CWorld();
	~CWorld();

	void initialize();
	void update();
	void render();
	void destroy();
};

