#include "shapes.h"

int main()
{
	int num1, num2;
	cout << "enter number of sides for polygon 1:\n"; cin >> num1;
	switch (num1)
	{
		case 3:
		{
			Triangle t1;
			cout << "enter number of sides for polygon 2:\n"; cin >> num2;
			if (num2 != 3) break;
			Triangle t2;
			if (t1 == t2)
			{
				cout << "equal\n";
				return 0;
			}
			break;
		}
		case 4:
		{
			Rectangle r1;
			cout << "enter number of sides for polygon 2:\n"; cin >> num2;
			if (num2 != 4) break;
			Rectangle r2;
			if (r1 == r2)
			{
				cout << "equal\n";
				return 0;
			}
			break;
		}
		default:
		{
			Polygon p1(num1);
			cout << "enter number of sides for polygon 2:\n"; cin >> num2;
			if (num1 != num2) break;
			Polygon p2(num2);
			if (p1 == p2)
			{
				cout << "equal\n";
				return 0;
			}
			break;
		}
	}
	cout << "not equal\n";
	return 0;
}
