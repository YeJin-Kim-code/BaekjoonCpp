#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{

	//ios_base::sync_with_stdio(false); //����Է� ��û�� �ð��̵�
	//cin.tie(nullptr);

	int a;
	cin >> a;
	int array[1000000];



	for (int i = 0; i < a; i++)
	{
		cin >> array[i];
	}

	sort(array, array + a);//����� ���� �־��� ��쿡�� O(NlogN)����

	for (int i = 0; i < a; i++)
	{
		cout << array[i]<<'\n';//endl ���� \n�� ���°��� �ð������� �ξ� �̵�
	}

	return 0;
}