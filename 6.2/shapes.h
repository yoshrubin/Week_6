#include <iostream>
using namespace std;

class Polygon{
protected:
  int numSides;
  long *sides;
public:
  //CTOR
  Polygon(int);
  //CCTOR
  Polygon(Polygon&);
  //DTOR
  ~Polygon();

  int getNumSides();
  long scope();
  bool operator == (Polygon&);
};

class Rectangle : public Polygon
{
public:
	// CTOR
	Rectangle();
	Rectangle(Rectangle&);
};

class Triangle : public Polygon
{
public:
	// CTOR
	Triangle();
	Triangle(Triangle&);
};
