#include <iostream>
using namespace std;
int main()
{
	int a[4] = {6, 5, 1, 3};
	int i, j, temp;
	for (i = 1; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 1; i < 5; i++)
	{
		cout << a[i] << endl;
	}
}
