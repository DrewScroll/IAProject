#pragma once
#include "CGameObject.h"
class CBoid :
	public CGameObject
{
public:
	CVector3 m_Position;
	CVector3 m_Direccion;
	float fOrientation;
	CVector3 m_Velocity;
	float fRotation;
	float fSpeed;
	float fFuerza;
	CBoid();
	~CBoid();

	CVector3 seek(CGameObject target);
	CVector3 flee(CGameObject target);
	CVector3 arrive(CGameObject target);
	CVector3 pursue(CGameObject target);
	CVector3 evade(CGameObject target);
	CVector3 wander(CGameObject target);
	CVector3 followPath();
};