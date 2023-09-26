#include <iostream>

using namespace std;


int main()
{
	double a = 0.0;
	double b = 0.0;
	double big = 0.0;
	double sum = 0.0;
	double array[10000] = { 0 }; // 배열의 크기가 안맞을시 런타임 에러가 발생됨, 더블형 사용
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		array[i] = b;
	}

	big = array[0];
	for (int i = 0; i < a-1; i++)
	{
		if (big < array[i + 1])
		{
			big = array[i + 1];
		}
		//cout << big << endl;
	}

	for (int i = 0; i < a; i++)
	{
		sum += double(array[i] / big * 100);
		//cout << array[i] / big * 100 << endl;
	}
	cout.setf(ios::fixed); //c++에서 부동소수점
	cout.precision(15);

	cout << double(sum / a) << endl;
}