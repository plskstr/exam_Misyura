#include <iostream>
using namespace std;

int SumOdd(int* arr);

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
