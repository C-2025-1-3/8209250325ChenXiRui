
#include <iostream>
using namespace  std;
int min(int a, int b) {
	int m;
	if (a <= b) {
		m=a;
	}
	else {
		m = b;
	}return m;
}
int max(int a, int b) {
	int m;
	if (a <= b) {
		m=b;
	}
	else {
		m=a;
	}return m;
}
int main()

{
	cout << "type a and b:" << endl;
	int a, b;
	cin >> a >> b;
	for (int i =min(a,b) ; i <= a && i <= b; i--) {
		if (a % i == 0 && b % i == 0) { cout << "a,b最大公约数是：" << i << endl; break; }
	}
	for (int e = max(a, b); e >= a && e >= b; e++) {
		if (e % a == 0 && e % b == 0) { cout << "a,b最小公倍数是：" << e << endl; break; }
	}
}