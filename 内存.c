#include <stdio.h>
#include <stdlib.h>
void check(int *p1)
{
	int j;
	for(j=0;j<5;j++)
	{
		if(p1[j]<60)
		{
			printf("不及格为%d\n",p1[j]);
		}
	
	}

}

void main()
{
 printf("创建动态数组，输入5个学生成绩，用另外一个函数检查有无低于60,输出不及格学生\n");
 int *p = (int *)malloc(sizeof(int)*5);
 int i;
 for(i=0;i<5;i++)
 {
	scanf("%d",&p[i]);
 }
	check(p);

}
