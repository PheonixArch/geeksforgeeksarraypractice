//#include<iostream>
//using namespace std;
//
//void sort(int arr[], int n) 
//{
//	int min;
//	for (int i = 0; i < n-1; i++)
//	{
//		min = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if(arr[j]<arr[min])
//			{
//				min = j;
//				swap(arr[min], arr[i]);
//			}
//		}
//	}
//}
//int smallestkthval(int arr[],int n,int k)
//{
//	sort(arr, n);
//	
//	return arr[k - 1];
//	
//}
//int largestkthval(int arr[], int n, int k)
//{
//	sort(arr, n);
//	return arr[n - k];
//}
//int main()
//{
//	int arr[] = { 0,3,2,5,1 };
//	int size = sizeof(arr) / sizeof(int);
//	int k = 0;
//	cout << "enter kth index in the " << size << " size array : ";
//	cin >> k;
//	cout << endl;
//	cout << "The Kth smallest value is :" << smallestkthval(arr, size, k)<<endl;
//	cout << "The Kth largest value is :" << largestkthval(arr, size, k) << endl;
//
//	return 0;
//	system("pause");
//
//}
