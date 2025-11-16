

#include <iostream>
using namespace std;
int main()
{	float a;
	cin >> a;
	float x = a;
	float y;
	for (;1 ;) {
		
			
			y = (x + a / x) / 2; 
			
			if (fabs(y - x) <= 1e-5){ break;}
			x = y;
	}
	cout << y;
}

