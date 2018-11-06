#pragma once
class Point
{
public:
	Point();
	~Point();

	int getY();
	void setY(int y);

	int getX();

	void setX(int x);

private:
	int m_x, m_y;
};

