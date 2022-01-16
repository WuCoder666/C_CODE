#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//void hanoi(int n, char A, char B, char C)//n个圈圈在柱子A上，借助柱子B，移动到柱子C上
//{
//    if (n == 1)//如果A柱子上只有一个圈圈，直接移动到C上
//        printf("%c --> %c\n", A, C);
//    else
//    {
//        hanoi(n - 1, A, C, B);//将A柱子上的n-1个圈圈，借助柱子C，移动到柱子B上
//        printf("%c --> %c\n", A, C);//将A柱子上的最后一个圈圈移动到柱子C上
//        hanoi(n - 1, B, A, C);//将B柱子上的n-1个圈圈，借助柱子A，移动到柱子C上
//    }
//}
//
//int main()
//{
//    
//    hanoi(3, 'A', 'B', 'C');
//    return 0;
//
//}

//int get_max(int x,int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int i = 5;
//	int j = 6;
//	scanf("%d %d", &i, &j);
//	printf("%d",get_max(i, j));
//	return 0;
//}

//void Swap(int *pa, int *pb)
//{
//	int tep;
//	tep = *pa;
//	*pa = *pb;
//	*pb = tep;
//}
//int main()
//{
//	int num1 = 5;
//	int num2 = 3;
//	//Swap1(num1, num2);
//	//printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	scanf("%d %d", &num1, &num2);
//	Swap(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//int is_prime(int x)
//{
//	int j = 0;
//	for (j =2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_prime(i) == 1)
//	{
//		printf("%s\n", "此数为素数");
//	}
//	else {
//		printf("%s\n", "此数不为素数！");
//	}
//	return 0;
//}

// int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
// int main()
// {
//	 int y = 0;
//	 for (y = 1000; y <= 1500; y++)
//	 {
//		 if (is_leap_year(y) == 1)
//		 {
//			 printf("%d ", y);
//		 }
//	 }
//
//	 return 0;
// }

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到了
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//找到了就返回找到的位置的下标
	//找不到返回-1
	//数组arr传参，实际传递的不是数组的本身
	//仅仅传过去了数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}