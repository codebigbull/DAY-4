 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��ӡ99�˷���
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



//�����ֵ
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
	printf("���ֵ�ǣ�%d��", max);
}



//����������
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

//��9
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


//������
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
	printf("�������\n");
	printf("%d\n",num);
	while (1)
	{
		scanf("%d", &b);
		if (b < num)
		{
			printf("̫С��\n");
		}
		if (b > num)
		{
			printf("̫����\n");
		}
		if (b == num)
		{
			printf("��ϲ�㣬�¶��ˣ���\n");
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
			printf("����������������룺\n");
			break;
		}
	} while (a);
}



//���ֲ���
void find()
{
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int num = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	printf("������Ҫ���ҵ�����\n");
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
			printf("�ҵ��ˣ������±���%d��", c);
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