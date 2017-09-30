#include "stdafx.h"
#include "CBoid.h"


CBoid::CBoid()
{
}


CBoid::~CBoid()
{
}

CVector3 CBoid::seek(CGameObject target)
{
	CVector3 Direccion = target.m_Position - m_Position;
	Direccion = Direccion.Normalize();
	return Direccion;
}

CVector3 CBoid::flee(CGameObject target)
{
	CVector3 Direccion = m_Position - target.m_Position;
	Direccion = Direccion.Normalize();
	return Direccion;
}

CVector3 CBoid::arrive(CGameObject target)
{
	return CVector3();
}

CVector3 CBoid::pursue(CGameObject target)
{
	CGameObject PosFutura;
	PosFutura.m_Position = target.m_Position + (target.m_Direccion*target.fSpeed*target.fFuerza);
	return seek(PosFutura);
}

CVector3 CBoid::evade(CGameObject target)
{
	CGameObject PosFutura;
	PosFutura.m_Position = target.m_Position + (target.m_Direccion*target.fSpeed*target.fFuerza);
	return flee(PosFutura);
}
