#include <iostream>

using namespace std;


int main()
{
	double a = 0.0;
	double b = 0.0;
	double big = 0.0;
	double sum = 0.0;
	double array[10000] = { 0 }; // �迭�� ũ�Ⱑ �ȸ����� ��Ÿ�� ������ �߻���, ������ ���
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
	cout.setf(ios::fixed); //c++���� �ε��Ҽ���
	cout.precision(15);

	cout << double(sum / a) << endl;
}