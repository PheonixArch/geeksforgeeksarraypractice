#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void negativenum_onleft(int arr[],int n)
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]<0)
		{
			swap(arr[i], arr[j]);
			j++;
		}
	}
}

void printarray(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if(i!=n-1)
		{
			cout << arr[i] << " , ";
		}
		else
		{
			cout << arr[i] << endl;
		}
	}
}

int main()
{
	int arr[] = { 0,-1,-2,3,4,5,-6,8 };
	int size = sizeof(arr) / sizeof(int);

	printarray(arr, size);
	cout << endl;
	negativenum_onleft(arr, size);
	
	printarray(arr, size);
	cout << endl;
	return 0;
	system("pause");
}