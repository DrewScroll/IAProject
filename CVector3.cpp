#include "stdafx.h"
#include "CVector3.h"


CVector3::CVector3()
{
}

CVector3::CVector3(float fx, float fy, float fz, float fw)
{
	cx = fx;
	cy = fy;
	cz = fz;
	cw = fw;
}

CVector3::~CVector3()
{
}

CVector3 CVector3::operator*(const CVector3 & A) const
{
	CVector3 R = { cx*A.cx, cy*A.cy, cz*A.cz, cw*A.cw };
	return R;
}

CVector3 CVector3::operator-(const CVector3 & A) const
{
	CVector3 R = { cx - A.cx, cy - A.cy, cz - A.cz, cw - A.cw };
	return R;
}

CVector3 CVector3::operator+(const CVector3 & A) const
{
	CVector3 R = { cx + A.cx, cy + A.cy, cz + A.cz, cw + A.cw };
	return R;
}

CVector3 CVector3::operator*(const float fs) const
{
	CVector3 R = { cx*fs, cy*fs, cz*fs, cw*fs };
	return R;

}

CVector3 CVector3::operator/(const float fs) const
{
	CVector3 R;
	R = { cx / fs, cy / fs, cz / fs, cw / fs };
	return R;
}

float CVector3::Dot(const CVector3 & A) const
{
	return  cx*A.cx + cy*A.cy + cz*A.cz + cw*A.cw;
}

float CVector3::Magnity() const
{
	CVector3 R = { cx,cy,cz,cw };
	return sqrtf(Dot(R));
}

CVector3 CVector3::Normalize() const
{
	CVector3 R = { cx,cy,cz,cw };
	float inv = 1.0f / Magnity();
	R = R*inv;
	return R;
}

CVector3 CVector3::Cross3(const CVector3 & A) const
{
	CVector3 R;
	R.cx = cy*A.cz - cz*A.cy;
	R.cy = cz*A.cx - cx*A.cz;
	R.cz = cx*A.cy - cy*A.cx;
	R.cw = 0;
	return R;
}