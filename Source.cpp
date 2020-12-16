#include<iostream>
using namespace std;

void Nemezida(int (*arr2)[5], size_t n)
{
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (j % 2 != 0)
			{
				cout << arr2[j][i];
			}
		}
		if (j % 2 != 0)
		{
			cout << endl;
		}
	}
}

void Nemezida(int* arr1, bool flag, int k)
{
	for (int i = 0; i < 15; i++)
	{
		if (flag!=true)
		{
			if (arr1[i] == 0)
			{
				flag = true;
			}
			cout << arr1[i];
		}
	}
	for (int i = 0; i < 15; i++)
	{
		if (arr1[i] == 0)
		{
			k++;
		}
		if (k == 2)
		{
			cout << arr1[i];
		}
	}
}

int main()
{
	bool flag = false;
	int arr2[5][5]
	{
		{1,2,3,4,5},
	    {5,4,3,2,1},
		{1,2,3,4,5},
		{5,4,3,2,1},
		{1,2,3,4,5}
	};
	int arr1[15]{ 1,2,3,4,0,5,6,7,8,9,0,3,5,1,2 };

	Nemezida(arr2, 5);
	Nemezida(arr1, false, 0);
}