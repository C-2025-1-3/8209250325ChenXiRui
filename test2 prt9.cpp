//9、苹果A每个 0.8 元，第一天买 2 个，第二天开始，每天买前天的 2 倍，直到购买的苹果数不超过100的最大值，求每天平均AVERAGE花多少钱。
#include <iostream>
using namespace std;
int main()
{
	float a = 2, d = 1, t = 0, w = 2;
	for (; (w +a*2)<= 100; ) {
		a = a * 2, d++;
		w = a + w;
		t = a * 0.8 + t;
	} 
	cout << "average cost is:" << t / d;
	}
	