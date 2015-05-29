#include "shapes.h"

Polygon::Polygon(int numSides) : _numSides(numSides)
{
	sides = new long[numSides];
	if (numSides > 4)
	{
		cout << "enter sides for polygon:\n";
		for (int i = 0; i < _numSides; i++)
			cin >> sides[i];
	}
}

Polygon::Polygon(Polygon& pol)
{
	_numSides = pol._numSides;
	sides = new long[_numSides];
	for (int i = 0; i < _numSides; i++)
		sides[i] = pol.sides[i];
}

Polygon::~Polygon()
{
	delete[] sides;
}

int Polygon::getNumSides()
{
	return _numSides;
}

long Polygon::scope()
{
	long sum = 0;
	for (int i = 0; i < _numSides; i++)
		sum += sides[i];
	return sum;
}

bool Polygon::operator==(Polygon& pol)
{
	return (_numSides == pol._numSides) && (scope() == pol.scope());
}

Rectangle::Rectangle() : Polygon(4)
{
	cout << "enter sides for polygon:\n";
	cin >> sides[0] >> sides[1];
	sides[2] = sides[0];
	sides[3] = sides[1];
}

Rectangle::Rectangle(Rectangle& rec) : Polygon(rec) {}

Triangle::Triangle() : Polygon(3)
{
	cout << "enter sides for polygon:\n";
	cin >> sides[0] >> sides[1] >> sides[2];
}

Triangle::Triangle(Triangle& tri) : Polygon(tri) {}
