#include <iostream>
using namespace std;
void buildStairs(int height);
void buildPyramide(int height);
int main()
{
	int height;
	int choice;
	while (true)
	{
		cout << "Enter height\n";
		cin >> height;
		if (!cin)
		{
			cin.clear();
			cout << "You entered incorrect height\n";
			while (cin.get() != '\n')
				continue;
			continue;
		}
		break;
	}
	while (true)
	{
		cout << "Enter '1' to build pyramide and '0' to build simple stairs\n";
		cin >> choice;
		if (!cin || (choice != 1 && choice != 0))
		{
			cin.clear();
			cout << "You entered incorrect number\n";
			while (cin.get() != '\n')
				continue;
			continue;
		}
		break;
	}
	if (choice)
		buildPyramide(height);
	else
		buildStairs(height);
	system("pause");
	return 0;
}

void buildStairs(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = i; j < height - 1; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}

void buildPyramide(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = i; j < height - 1; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		for (int j = i; j < height - 1; j++)
			cout << " ";
		cout << endl;
	}
}