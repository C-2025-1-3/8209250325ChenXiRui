#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "请输入您要换算的华氏度温度：" << endl;
	float h;
	cin >> h;
	cout << "换算后的温度是（摄氏度）" <<fixed<< setprecision(2)<<(h-32)/1.8 << "℃" << endl;
	system("pause");
}
