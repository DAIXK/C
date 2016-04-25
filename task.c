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
	for(j= 0;j<99;j++)  //假如min下标为最小，所以就剩下99个数组 0-99 为一百个下标
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
		printf("%d\n",num[j]);
	}

}
int  main()
{
	int a[10];
	int i,j,k;

	for(i = 0;i<10;i++)
	{
		scanf("%d",&a[i]);
	
	
	}
	for(i = 0;i <10;i++)
	{
	 printf("%d\n",a[i]);

	}

	return 0;
}


void main1()
{
	
	printf("习题一：输入10个数，存入一个数组，并输出从小到大，从大到小\n");
	printf("习题二：随机生成100个数，实现排序\n");
	task2();
	printf("习题三：实现循环一次初始化二维数组\n");










}
