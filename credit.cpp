#include <iostream>
using namespace std;

int SumEven(int* arr);

int main()
{
	system("pause");
	return 0;
}

int SumEven(int * arr)
{
	int sum = 0;
	for (int i = 1; i < 16; i += 2)
	{
		if (arr[i] * 2 < 10)
			sum += arr[i] * 2;
		else
		{
			sum += arr[i] % 10;
			sum += arr[i] / 10;
		}
	}

	return sum;
}