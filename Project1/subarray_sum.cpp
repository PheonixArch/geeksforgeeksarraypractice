//#include<iostream>
//using namespace std;
//
//int subarray_sum(int arr[],int n,int sum)
//{
//	int curr_sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j < n; j++)
//		{
//			curr_sum = curr_sum + arr[j];
//			if(curr_sum==sum)
//			{
//				cout << "Sum found between indexes " << i << " and " << j << endl;
//				return 1;
//			}
//			
//		}
//		curr_sum = 0;
//	}
//	cout << "no Subarray found" << endl;
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,5,6,8,9,10,12 };
//	int size = sizeof(arr) / sizeof(int);
//	int sum = 0;
//	cout << "ENTER THE SUM : ";
//	cin >> sum;
//
//	subarray_sum(arr, size, sum);
//
//	system("pause");
//	return 0;
//}