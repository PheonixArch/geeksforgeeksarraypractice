#include<iostream>
using namespace std;

void sortzeroonetwo(int arr[],int n)
{
	int x = 0;
	int mid = 0;
	int y = n - 1;

	while(mid<=y)
	{
			switch (arr[mid])
			{
			case 0:
				swap(arr[x++], arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid], arr[y--]);
				break;
			}
		
	}
}
void printarray(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n-1)
		{
			cout << arr[i] << ",";
		}
		else
		{
			cout << arr[i] << endl;
		}
	}
}
int main()
{
	int arr[] = { 0,0,1,1,0,0,2,2,2,1,1,0,0,0,2,1,2 };
	int size = sizeof(arr) / sizeof(int);

	cout << "the array is: ";
	printarray(arr, size);
	cout << endl<<"the sorted array is: ";
	sortzeroonetwo(arr, size);
	printarray(arr, size);
	cout << endl;
	return 0;
	system("pause");
}