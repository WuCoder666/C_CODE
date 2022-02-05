#define _CRT_SECURE_NO_WARNINGS
//三步翻转法
#include<stdio.h>
//void turn(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);//不扫描\n
//	//1.把整个字符串逆序
//	int len = strlen(arr);
//	turn(arr, arr+len - 1);
//	//2.每个单词逆序
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		turn(start, end - 1);
//		if (*end == ' ')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	//3.输出
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
//int main()
//{
//	char* ps = "hello";
//	char arr[10] = "hello";
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//	return 0;
//}
//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p  = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + sz ;
//	
//	for (;p < pend; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 500; i++)
//	{
//		//求出有几位数；
//		int n = 1;//任何数字至少都是一位;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//求出每位数的N次方；
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	//打印空格
//	printf("请输入菱形上半部分的行数>：");
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		//下半部分
//	}
//	
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(n-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		sum += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i <10 ; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}