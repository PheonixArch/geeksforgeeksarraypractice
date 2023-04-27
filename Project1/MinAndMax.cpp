//#include <iostream>
//using namespace std;
//
//int findmin(int arr[],int n)
//{
//	int min = arr[0];
//	if (n > 0) 
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (min >= arr[i])
//			{
//				min = arr[i];
//			}
//		}
//	}
//	return min;
//}
//
//int findmax(int arr[], int n)
//{
//	int max = arr[0];
//	if (n > 0)
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (max <= arr[i])
//			{
//				max = arr[i];
//			}
//		}
//	}
//	return max;
//}
//
//
//int main()
//{
//	int arr[] = { 2,3,4,5,10 };
//	int size = sizeof(arr) / sizeof(int);
//	cout << "The minimum in the array is: " << findmin(arr, size)<<endl;
//	cout << "The maximum in the array is: " << findmax(arr, size) << endl;
//
//	system("pause");
//	return 0;
//
//
//}