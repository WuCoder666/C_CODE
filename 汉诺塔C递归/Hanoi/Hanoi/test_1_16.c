#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//void hanoi(int n, char A, char B, char C)//n��ȦȦ������A�ϣ���������B���ƶ�������C��
//{
//    if (n == 1)//���A������ֻ��һ��ȦȦ��ֱ���ƶ���C��
//        printf("%c --> %c\n", A, C);
//    else
//    {
//        hanoi(n - 1, A, C, B);//��A�����ϵ�n-1��ȦȦ����������C���ƶ�������B��
//        printf("%c --> %c\n", A, C);//��A�����ϵ����һ��ȦȦ�ƶ�������C��
//        hanoi(n - 1, B, A, C);//��B�����ϵ�n-1��ȦȦ����������A���ƶ�������C��
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
//		printf("%s\n", "����Ϊ����");
//	}
//	else {
//		printf("%s\n", "������Ϊ������");
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
	return -1;//�Ҳ�����
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ�������-1
	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
	//��������ȥ��������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}