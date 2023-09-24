#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int most = 0;
	int big = 0;
	cin >> a >> b >> c;

	if ((a == b) && (b == c))
	{
		cout << 10000 + a * 1000 << endl;
	}

	else if (a == b|| b == c || a == c)
	{
		most = a != b ? c : a;

		cout << 1000 + most * 100 << endl;;
	}
	else
	{
		big = a > b ? a : b ;
		big = big > c ? big : c;

		cout << big * 100 << endl;;
	}
}