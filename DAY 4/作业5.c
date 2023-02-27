 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印上的倍数
void times()
{
	int a = 0;
	int i = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}

}

//排序三个数字
void sort()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;
	/*int i = 0;
	int max = 0;
	int mid = 0;
	int min = 0;*/
	/*int i = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		if (a > c)
		{
			max = b;
			mid = a;
			min = b;
		}
		else if (a < c && c < b)
		{
			max = b;
			mid = c;
			min = a;
		}
		else if(b<c)
		{
			max = c;
			mid = b;
			min = a;
		}
	}
	if (a > b)
	{
		if (b > c)
		{
			max = a;
			mid = b;
			min = c;
		}
		else if (b < c && c < a)
		{
			max = a;
			mid = c;
			min = b;
		}
		else if(a<c)
		{
			max = c;
			mid = a;
			min = b;
		}
	}
	printf("%d %d %d", max, mid, min);*/
	scanf("%d %d %d", &a, &b, &c);
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if (b < c)
		{
			temp = b;
			b = c;
			c = temp;
		}
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
	printf("%d %d %d", a, b, c);

}

//打印素数
void print()
{
	int i = 0;
	int a = 0;
	int num = 0;
	for (i = 100; i <= 201; i++)
	{
		for (a = 2; a < i; a++)
		{
			if (i % a == 0)
			{
				break;
			}
		}
		if (a == i)
		{
			num = i;
			printf("%d ", num);
		}		
	}
}


//打印闰年
void year()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);
		}
		if (i % 100 == 0 && i % 400 == 0)
		{
			printf("%d ", i);			
		}
	}
}

//求最大公因数
void time()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int temp = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (i = b; i > 0; i--)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
			{
				printf("最大公因数为：%d。", i);
				break;
			}
			
		}
	}
}


//int main()
//{
	//times();
	//sort();
	//print();
	//year();
	//time();
	//return 0;
//}