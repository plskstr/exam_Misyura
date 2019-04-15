#include <iostream>
using namespace std;

int SumOdd(int* arr);
int SumEven(int* arr);
bool IsCorrect(const long long& number);2


int main()
{
	system("pause");
	return 0;
}

int SumOdd(int * arr)
{
	int sum = 0;
	for (int i = 0; i < 16; i += 2)
		sum += arr[i];

	return sum;
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


bool IsCorrect(const long long& number)
{
	if (number / 10E14 < 1 || number / 10E14 > 9 || !cin)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		return false;
	}

	return true;
}

