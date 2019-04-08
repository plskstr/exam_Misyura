#include <iostream>
using namespace std;
void buildStairs(int height, bool choice);
int main()
{
	int height;
	bool choice;
	cout << "Enter height of stair's\n";
	cin >> height;
	cout << "Enter '1' to build double-stairs and '0' to build simple stairs\n";
	cin >> choice;
	return 0;
	system("pause");
}

void buildStairs(int height)
{
	for	(int i = 0; i < height; i++)
	{
		for (int j = i; j < height - 1; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}