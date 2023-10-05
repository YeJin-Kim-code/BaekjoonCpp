#include <iostream>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c = 0;
	int min = 0;
	cin >> a >> b;
	cin >> c;

	min = b + c;
	while (min >= 60)
	{
		a++;
		min = min - 60;
	}
	while (a >= 24)
	{
		a = a - 24;
	}


	cout << a << ' ' << min;
}