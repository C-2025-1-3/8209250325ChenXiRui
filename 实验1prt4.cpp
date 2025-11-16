#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:因为testunint的值超过了short int能表示的范围
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "outout in oct unsigned int type: " << oct << testUnint << endl;//八进制输出
	float 实数 = 6553.4;
	cout << "实数1是：" << setprecision(6)<< 实数 << endl;
	cout << "将实数转化为int为：" << (int)实数<< endl;
	system("pause");
	return 0;
}