//#include<iostream>
//using namespace std;
//
//void union1(int arr1[],int n,int arr2[],int m)
//{
//	int i = 0, j = 0;
//	while(i<n&&j<m)
//	{
//		if(arr1[i]<arr2[j])
//		{
//			cout << arr1[i] << " ";
//			i++;
//		}
//		else if(arr1[i]>arr2[j])
//		{
//			cout << arr2[j] << " ";
//			j++;
//		}
//		else if(arr1[i]==arr2[j])
//		{
//			cout << arr1[i] << " ";
//			i++; j++;
//		}
//		
//	}
//	while (i < n)
//	{
//		cout << arr1[i] << " ";
//		i++;
//	}
//	while (j < m)
//	{
//		cout << arr2[j] << " ";
//		j++;
//	}
//	cout << endl;
//}
//
//void intersection(int arr1[],int n,int arr2[],int m)
//{
//	int i = 0, j = 0;
//	while(i<n&&j<m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			i++;
//		}
//		else if (arr1[i] > arr2[j])
//		{
//			j++;
//		}
//		else if (arr1[i] == arr2[j])
//		{
//			cout << arr1[i] << " ";
//			i++; j++;
//		}
//
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5 };
//	int arr2[] = { 0,2,4,5,6,7,8 };
//	int size1 = sizeof(arr1) / sizeof(int);
//	int size2 = sizeof(arr2) / sizeof(int);
//
//	union1(arr1, size1, arr2, size2);
//	intersection(arr1, size1, arr2, size2);
//
//	return 0;
//
//	system("pause");
//}