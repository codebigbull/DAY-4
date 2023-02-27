 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//打印99乘法表
void table()
{
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			num = i * j;
			printf("%d * %d = %d  ", j, i, num);
			
		}
		printf("\n");
	}
}



//求最大值
void MAX()
{
	int i = 0;
	int j = 0;
	int num = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		int c = num;
		scanf("%d", &num);
		max = num > c ? num : c;
	}
	printf("最大值是：%d。", max);
}



//计算分数求和
void calc()
{
	int i = 0;
	float sum = 0.0f;
	for (i = 1; 1 <= 100; i++)
	{
		sum += ((-1) ^ (i - 1)) * (1 / (float)i);
	}
	printf("%f", sum);
}

//数9
void count()
{
	int i = 0;
	int num = 0;
	for (i = 1; i < 101; i++)
	{
		if (i%10 == 9)
			num++;
		if ((i / 10)%10==9&&i%10!=9)
		{
			num++;
		}
	}
	printf("%d ", num);
}


//猜数字
menu()
{
	printf("***************\n");
	printf("****1. play****\n");
	printf("****0. exit****\n");
	printf("***************\n");
}

void game()
{
	int num = rand()%100+1;
	int b = 0;
	printf("请猜数字\n");
	printf("%d\n",num);
	while (1)
	{
		scanf("%d", &b);
		if (b < num)
		{
			printf("太小了\n");
		}
		if (b > num)
		{
			printf("太大了\n");
		}
		if (b == num)
		{
			printf("恭喜你，猜对了！！\n");
			break;
		}
	}
	
}
void guess()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d",&a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (a);
}



//二分查找
void find()
{
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int num = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	printf("请输入要查找的数字\n");
	scanf("%d", &num);
	while (left < right)
	{
		if (a[(right + left) / 2] < num)
		{
			left = (right + left) / 2;
		}
		if (a[(right + left) / 2] > num)
		{
			right = (right + left) / 2;
		}
		if (a[(right + left) / 2] == num)
		{
			int c = (right + left) / 2;
			printf("找到了，数字下标是%d。", c);
			break;
		}
	}
}


int main()
{
	//table();
	//MAX();
	//calc();
	//count();
	//guess();
	find();
}