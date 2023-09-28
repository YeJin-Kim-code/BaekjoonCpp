#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int array[1000];
	int save;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> array[i];

	}
	//시간복잡도 n^2
	for (int i = 0; i < a-1; i++)
	{
		for (int j = 0; j < a-1; j++)
		{
			if (array[j] > array[j + 1])
			{
				save = array[j];
				array[j] = array[j + 1];
				array[j + 1] = save;
			}
		}
	}


	for (int i = 0; i < a; i++)
	{
		cout << array[i] << endl;

	}
}