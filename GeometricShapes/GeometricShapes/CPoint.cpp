#include "CPoint.h"

CPoint::CPoint(const float x, const float y)
	: m_x(x)
	, m_y(y)
{
}

float CPoint::GetX() const
{
	return m_x;
}

float CPoint::GetY() const
{
	return m_y;
}
