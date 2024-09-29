#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//xS = -3
//xE = 5 
//R= 1
//dx = 1
int main()
{
	double x, xS, xE, dx; //xS start, xE limit, dx - step
	double R;
	double y;
	cout << "xS = "; cin >> xS;
	cout << "xE = "; cin >> xE;
	cout << "\nR = "; cin >> R;
	cout << "\ndx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	for (x = xS; x < xE; x++)
	{
		if (x <= -1 - R)
			y = -1;
		else
		{
			if (x > -1 - R && x <= -1)
				y = -sqrt((pow(R, 2) - pow((x + 1), 2)));
			else
			{
				if (x > -1 && x <= 2)
					y = -R;
				else
					y = -R + (R / (4 - 2)) * (x - 2);
			}
		}
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	return 0;
}