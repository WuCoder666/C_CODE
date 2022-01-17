#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int search(int arr[],int x,int y)
//{
//	int left = 0;
//	int right = y - 1;
//	
//	while(left<=right)
//	{ 
//		int mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//	
//}
//int main()
//{
//找到了就返回找到的位置的下标
//找不到返回-1
//数组arr传参，实际传递的不是数组的本身
//仅仅传过去了数组首元素的地址
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	scanf("%d", &key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, key, sz);
//	if (ret == 0)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，元素下标为:%d\n", ret);
//	}
//	return 0;
//}

//void add(int* x)
//{
//	(*x)++;
//	
//}
//int main()
//{
//	int num = 5;
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//	}
//		printf("%d  ", x%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int is_strlen(char* p)
//{
//	if (*p != '\0')
//	{
//		return 1 + is_strlen(p + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "China";
//	printf("%d\n", is_strlen(arr));
//}

//void hanoi(int x,char A,char B,char C)//n个圈在柱子A上，通过柱子B移动到柱子C上
//{
//	if (x == 1)//当A柱子上只有一个圈时，直接移动到C柱子上
//	{
//		printf("%c->%c\n", A, C);
//	}
//	else
//	{
//		hanoi(x - 1, A, C, B);//
//		printf("%c->%c\n", A, C);
//		hanoi(x - 1, B, A, C);
//	}		
//}
//int main()
//{
//	
//	hanoi(2, 'A', 'B', 'C');
//	return 0;
//}

int jiecheng(int x)
{
	
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x * jiecheng(x - 1);
	}
}
int main()
{
	int i = 4;
	printf("此阶乘为：%d\n",jiecheng(i));
	return 0;
}