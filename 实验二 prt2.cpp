
#include <iostream>
using namespace std;
int main()
{
	while (1) {
		cout << "please type x(0<x<10):" << endl;
		float x;
		cin >> x;
		if (0 < x &&x< 1) {
			cout << "y=" << 3 - 2 * x;
		}
		else if (1 <= x&&x < 5) {
			cout << "y=" << 2 / (x * 4) + 1;
		}
		else if (5 <= x &&x< 10) {
			cout << "y=" << x * x;
		}
		else { cout << "x from 0  to 10(except10& 0)"; break; }
	}
}

