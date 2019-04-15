#include <iostream>
using namespace std;

int SumEven(int* arr);
int SumOdd(int* arr);
void IsValid(int sum);
bool IsCorrect(const long long& number);
int * FormArr(const long long& number);

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
void IsValid(int sum)
{
	cout << "Number of your card is " << (sum % 10 == 0 ? "" : "in") << "valid.\n";
}



int * FormArr(const long long& number)
{
	int* digits = new int[16];
	cout << number << endl;
	long long temp = number;
	for (int i = 0; i < 16; i++, temp /= 10)
	{
		digits[i] = temp % 10;
		cout << digits[i];
	}
	cout << endl;

	return digits;
}
