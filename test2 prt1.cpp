

#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "输入一个字符：" << endl;
	cin >> c;
	int temp;
	if ( (int)c <= 122 && (int)c >= 97) {
		temp = c - 32;
		cout << (char)temp << endl;
	}
	else { cout << (int)c << endl; }



}

