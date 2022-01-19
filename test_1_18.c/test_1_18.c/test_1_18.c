#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for(i=1;i<=100;i++)
//	{
//	if (i % 2 == 0)
//	{
//		sum -= 1.0 / i;
//	}
//	else
//	{
//		sum += 1.0 / i;
//	}
//	}
//	printf("%lf\n", sum);
//	
//	return 0;
//}

//int main()
//{
//	double sum = 0.0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//		
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int my_strlen(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//void print_str(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		 
//		char tmp = str[left];
//	    str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	
//	char arr[] = "abcdef";
//	print_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int add(int x)
//{
//	if (x > 9)
//	{
//		return add(x / 10) + x % 10;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int num = 19;
//	int sum = add(num);
//	printf("%d\n", sum);
//	return 0;
//}

//√∞≈›≈≈–Ú∑®£ª
void bubble_sort(int arr[], int x)
{
	int j = 0;
	for (j = 0; j < x-1; j++)
	{
		int i = 0;
		for (i = 0; i < x - 1-j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i+1] = tmp;
			}
				
		}
	}
	
	
}
int main()
{
	int arr[] = { 1,2,5,6,4,3,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}


