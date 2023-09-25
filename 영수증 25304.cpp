#include <iostream>

using namespace std;

int main()
{
	int x, n, a, b = 0;
	int sum = 0;
	string str;
	cin >> x >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		sum += a * b;
	}

	str = sum == x ? "Yes" : "No";

	cout << str;
}
