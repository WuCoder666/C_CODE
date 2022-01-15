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

//写一个猜数字游戏
//1. 自动产生一个1-100之间的随机数
//2. 猜数字
//  a. 猜对了，就恭喜你，游戏结束
//  b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3. 游戏一直玩，除非退出游戏

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()//菜单
//{
//	printf("***********************\n");
//	printf("**    1.play game    **\n");
//	printf("**    0.exit game    **\n");
//	printf("***********************\n");
//}
////RAND_MAX--rand函数能返回随机数的最大值。
//void game()//猜数字游戏
//{
//	int random_num = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
//	int num = 0;
//	while(1)
//	{
//		printf("请输入猜的数字:");
//		scanf("%d", &num);
//		if (num < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else if (num > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else 
//		{
//			printf("恭喜你，猜对了！\n"); 	
//			break;//跳出循环
//		}
//	}
//
//}
//int main()//主函数
//{
//
//	int input = 0;
//	srand((unsigned)time(NULL));  //时间戳起点生成一次就可以；
//	do{
//		menu();
//	    printf("请选择你的操作：");
//	    scanf("%d", &input);
//	    switch (input)
//	    {
//	      case 1:
//		       game();
//		       break;
//	      case 0:
//		       printf("退出成功！\n");
//		       break;
//	      default:
//		       printf("请输入正确的数字！\n");
//		       break;
//	    }
//	}while (input);//0为假，非0为真；
//    return 0;
//}
	

#include <stdio.h>
void hanoi(int n, char A, char B, char C)//n个圈圈在柱子A上，借助柱子B，移动到柱子C上
{
    if (n == 1)//如果A柱子上只有一个圈圈，直接移动到C上
        printf("%c --> %c\n", A, C);
    else
    {
        hanoi(n - 1, A, C, B);//将A柱子上的n-1个圈圈，借助柱子C，移动到柱子B上
        printf("%c --> %c\n", A, C);//将A柱子上的最后一个圈圈移动到柱子C上
        hanoi(n - 1, B, A, C);//将B柱子上的n-1个圈圈，借助柱子A，移动到柱子C上
    }
}

int main()
{
    hanoi(3, 'A', 'B', 'C');
    return 0;

}