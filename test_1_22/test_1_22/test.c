#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	float i = 6 / 5.0;
//	printf("%f\n", i);
//	return 0;
//}

//vs采用的算数右移
//int main()
//{
//	int a = 2;
//	int b = a >> 1;
//	printf("%d\n", b);
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("\n");
//}
//void JiaoHuan(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		i = arr[left];
//		arr[left] = arr[right];
//		arr[right] = i;
//		left++;
//		right--;
//	}
//	printf("\n");
//	
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	JiaoHuan(arr, sz);
//	print(arr, sz);
//	Init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//void JiaoHuan(int arr1[], int arr2[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr1[0];
//		arr1[0] = arr2[0];
//		arr2[0] = tmp;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr1[] = { 0,1,2,3,5 };
//	int arr2[] = { 6,7,8,9,4 };
//	JiaoHuan(arr1, arr2);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;9
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pb = &a;
//	*pb = 0;
//	
//	return 0;
//}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8 };
	int* p = arr;
	int* pend = arr + 8;
	while (p <= pend)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}