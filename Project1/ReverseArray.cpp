//#include<iostream>
//using namespace std;
//
//void reversearray(int arr[],int n)
//{
//	int start = 0;
//	int end = n - 1;
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//
//}
//
//void printarray(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i != n - 1) 
//		{
//			cout << arr[i] << ",";
//		}
//		else
//		{
//			cout << arr[i] << endl;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,6,5,8,7,9,11 };
//	int size = sizeof(arr) / sizeof(int);
//
//	cout << "the array is:"; printarray(arr, size);
//
//	cout << endl << "the reverse array is: ";
//	reversearray(arr, size);
//	printarray(arr, size);
//
//	return 0;
//	system("pause");
//
//}