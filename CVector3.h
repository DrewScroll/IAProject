#pragma once
#include <math.h>
class CVector3
{
public:
	float cx, cy, cz, cw;
	CVector3();
	CVector3(float fx, float fy, float fz, float fw);
	~CVector3();

	CVector3 operator*(const CVector3 &A)const;
	CVector3 operator-(const CVector3 &A)const;
	CVector3 operator+(const CVector3 &A)const;
	CVector3 operator*(const float fs)const;
	CVector3 operator/(const float fs)const;
	float    Dot(const CVector3& A)const;
	float    Magnity()const;
	CVector3 Normalize()const;
	CVector3 Cross3(const CVector3& A)const;

};
