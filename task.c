#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[10];
	int i,j,k;
	int max= 0;
	for(i = 1;i <10 ;i++)
	{
	   a[i] = i;
		if(a[i]>a[max])
		{
			max = i;
		}
	
  printf("%d",a[max]);
	
	}


}
void main1()
{
	
	printf("习题一：输入10个数，存入一个数组，并输出从小到大，从大到小\n");

	printf("习题二：随机生成100个数，实现排序\n");

	printf("习题三：实现循环一次初始化二维数组\n");










}
