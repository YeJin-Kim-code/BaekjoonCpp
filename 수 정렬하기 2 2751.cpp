#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{

	//ios_base::sync_with_stdio(false); //고속입력 엄청난 시간이득
	//cin.tie(nullptr);

	int a;
	cin >> a;
	int array[1000000];



	for (int i = 0; i < a; i++)
	{
		cin >> array[i];
	}

	sort(array, array + a);//충분히 빠름 최악의 경우에도 O(NlogN)보장

	for (int i = 0; i < a; i++)
	{
		cout << array[i]<<'\n';//endl 보단 \n을 쓰는것이 시간적으로 훨씬 이득
	}

	return 0;
}