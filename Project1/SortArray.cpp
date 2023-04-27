//#include<iostream>
//
//using namespace std;
//void swap(int *x,int *y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//void printarray(int arr[],int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if(i!=n-1)
//		{
//			cout << arr[i] << ",";
//		}
//		else
//		{
//			cout << arr[i] << endl;
//		}
//	}
//}
//
//void sortArray(int arr[],int n)
//{
//	int min;
//	for (int i = 0; i < n-1; i++)
//	{
//		 min=i;
//		 for (int j = i+1; j < n; j++)
//		 {
//			 if(arr[j]<arr[min])
//			 {
//				 min = j;
//				 swap(arr[min], arr[i]);
//			 }
//
//		 }
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 2,0,23,19,17,5,2,-1 };
//	int size = sizeof(arr) / sizeof(int);
//
//	cout << "the array is: ";
//	printarray(arr, size);
//	cout << endl;
//
//	sortArray(arr, size);
//	cout << "the sorted array is ";
//	printarray(arr, size);
//
//	return 0;
//	system("pause");
//
//}
