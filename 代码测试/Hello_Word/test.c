#define _CRT_SECURE_NO_WARNINGS

 
//int hanshu(int a, int b)
//{
//	int c;
//	c = a + b;
//	return c;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = hanshu(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//	
//int main()
//{
//	int i;
//	for(i = 1;i<101;i++)
//	{
//		if (i % 2 == 1) 
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, n ,fac = 1,sum = 0;
//	
//	for (n = 1;n <= 10; n++) 
//	{
//		fac = 1;
//	for (i = 1; i <= n; i++) 
//	{
//		fac *= i;
//	}
//	sum += fac;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//дһ����������Ϸ
//1. �Զ�����һ��1-100֮��������
//2. ������
//  a. �¶��ˣ��͹�ϲ�㣬��Ϸ����
//  b. ��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3. ��Ϸһֱ�棬�����˳���Ϸ

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()//�˵�
//{
//	printf("***********************\n");
//	printf("**    1.play game    **\n");
//	printf("**    0.exit game    **\n");
//	printf("***********************\n");
//}
////RAND_MAX--rand�����ܷ�������������ֵ��
//void game()//��������Ϸ
//{
//	int random_num = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ����1-100
//	int num = 0;
//	while(1)
//	{
//		printf("������µ�����:");
//		scanf("%d", &num);
//		if (num < random_num)
//		{
//			printf("��С��\n");
//		}
//		else if (num > random_num)
//		{
//			printf("�´���\n");
//		}
//		else 
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n"); 	
//			break;//����ѭ��
//		}
//	}
//
//}
//int main()//������
//{
//
//	int input = 0;
//	srand((unsigned)time(NULL));  //ʱ����������һ�ξͿ��ԣ�
//	do{
//		menu();
//	    printf("��ѡ����Ĳ�����");
//	    scanf("%d", &input);
//	    switch (input)
//	    {
//	      case 1:
//		       game();
//		       break;
//	      case 0:
//		       printf("�˳��ɹ���\n");
//		       break;
//	      default:
//		       printf("��������ȷ�����֣�\n");
//		       break;
//	    }
//	}while (input);//0Ϊ�٣���0Ϊ�棻
//    return 0;
//}
	

#include <stdio.h>
void hanoi(int n, char A, char B, char C)//n��ȦȦ������A�ϣ���������B���ƶ�������C��
{
    if (n == 1)//���A������ֻ��һ��ȦȦ��ֱ���ƶ���C��
        printf("%c --> %c\n", A, C);
    else
    {
        hanoi(n - 1, A, C, B);//��A�����ϵ�n-1��ȦȦ����������C���ƶ�������B��
        printf("%c --> %c\n", A, C);//��A�����ϵ����һ��ȦȦ�ƶ�������C��
        hanoi(n - 1, B, A, C);//��B�����ϵ�n-1��ȦȦ����������A���ƶ�������C��
    }
}

int main()
{
    hanoi(3, 'A', 'B', 'C');
    return 0;

}