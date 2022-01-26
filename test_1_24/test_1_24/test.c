#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)
//	{
//
//	}
//}
//int main()
//{
//	char arr1[20] = { "aaaaaaaaaa" };
//	char arr2[] = { "hello" };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}
//int main()
//{
//
//	char arr[] = "hello";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", sz);
//	printf("%d ", my_strlen(arr));
//	return 0;
//}

//int Num(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Num(i);
//	printf("%d ", Num(i));
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d ,%d", a, b);
//	return 0;
//}

//Õ·×ªÏà³ý·¨
int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d %d", &a ,&b);
	int c = a;
	int d = b;
	while (r = a % b)
	{
		a = b;
		b = r;
	}
	int z = (c * d) / b;
	printf("%d", z);
	return 0;
}