#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); //고속입력 엄청난 시간이득
	cin.tie(nullptr);

	int a, b =0;

	cin >> a >> b;

	int arrayA[100][100];

	int arrayB[100][100];

	int arraySum[100][100];

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arrayA[i][j];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> arrayB[i][j];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << arrayA[i][j] + arrayB[i][j] << '\n';
		}
	}
}