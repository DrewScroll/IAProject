#pragma once
#include "CVector3.h"
class CGameObject
{
public:
	CGameObject();
	~CGameObject();

	CVector3 m_Position;
	CVector3 m_Direccion;
	float fOrientation;
	CVector3 m_Velocity;
	float fRotation;
	float fSpeed;
	float fFuerza;

	void initialize();
	void update();
	void render();
	void destroy();
};

