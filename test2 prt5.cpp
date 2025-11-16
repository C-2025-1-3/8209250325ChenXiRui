
#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "输入一串字符。" << endl;
	int s =0, w = 0,n =0, o = 0;
	while ((c = cin.get()) != '\n') {
		if (c == ' ') { s++; }
		else if (c >= '0' && c <= '9') { n++; }
		else if ('a' <= c <= 'z') { w++; }
		else { o++; };
	}
	cout << "space,letters,nums,others:--" << s << '\t' << w << '\t' << n << '\t' << o << '\t';
}

