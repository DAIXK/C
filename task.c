#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void task2()
{
	srand((unsigned)time(0));
	int num[100];
	int i,j,k;
	for(i = 0; i <100; i++)
	{
		num[i] = rand()%1000+1;
	
	}
	int min = 0;
	int temp;
	for(j= 0;j<100;j++)  //假如min下标为最小，所以就剩下99个数组 0-99 为一百个下标
	{
		min= j;
		for(k = j+1;k<100;k++) //然后在100个下标里面比较
		{
			if(num[k]>num[min]) //比较出最小的那个下标
			{
				min = k;
			
			}
		
		
		}
		if(min != j)  //剩下对下标再比较以及交换数据。
		{
			temp = num[min];
			num[min] = num[j];
			num[j] = temp;
		
		
		}
		printf("%-4d",num[j]);
	}

}
void  task1()
{
	int a[10];
	int i,j,h,k;

	for(h = 0;h<10;h++)
	{
		scanf("%d",&a[h]);
	}
	int min= 0;
	int temp;
	for(i = 0;i <10;i++)
	{
		min = i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[min])
			{
				min =j;
			}
		}
		if(min != i)
		{
			temp= a[i];
			a[i] = a[min];
			a[min]=temp;
		
		
	
		}
	}
	for(k=9;k>=0;k--)
	{
		printf("%-4d",a[k]);
	
	}
	printf("\n");
	for(k=0;k<10;k++)
	{
	
		printf("%-4d",a[k]);
	}

	printf("\n");
}


void task3()
{
	int a[3][4];
	int i;
	for(i = 1; i < 13; i++)
	{
		a[i/4][i%4] = i;  //二维数组一次循环算法为a[k][j]   a[i/j][i%j] 以第二个坐标为准。
	
		printf("%-4d",a[i/4][i%4]);
	}







}




void main()
{
	
	printf("习题一：输入10个数，存入一个数组，并输出从小到大，从大到小\n");
	task1();
	printf("习题二：随机生成100个数，实现排序\n");
	task2();
	printf("习题三：实现循环一次初始化二维数组\n");
	task3();









}
