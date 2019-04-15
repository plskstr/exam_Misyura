#include <iostream>
using namespace std;

int SumEven(int* arr);
int SumOdd(int* arr);

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
int SumOdd(int * arr)
{
	int sum = 0;
	for (int i = 0; i < 16; i += 2)
		sum += arr[i];

	return sum;
}
