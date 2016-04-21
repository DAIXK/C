#include<stdio.h>
#include<stdlib.h>
#define N 10

void suzu()//二位数组赋值函数
{
 int a[3][4];
 int i;
 int j;
    for( i=0;i<3;i++)
     {
        for(j=0;j<4;j++)
          {
            a[i][j] = i*4+j+1;
            printf("%-4d",a[i][j]);


                }
                printf("\n");
        }


 }





void duijiao() //求矩阵数组对角线函数
{
 	int num[N][N] = {0};
	int i,j,k;
	int result = 0;
	 for(i = 0; i < 10; i++)//赋值函数
		{
			for(j = 0; j < 10; j++ )
				{
					
					num[i][j] = i*10+j+1;
					printf("%-4d",num[i][j]);
					}
 			printf("\n");
			}
	 for(k = 0; k < N ; k++)//求对角线公式
		{ 
			result += num[k][k];
			}
	printf("对角线之和=%d\n",result);

 }

//以下为二维数组使用一维数组线型表达
void suzu2()
{
   int suzu2[N][N];
   int a = 0;
   int i; 
    for(i = 0; i < N*N;i++)
	{
	  suzu2[i/N][i%N] = ++a;
		     printf("%-4d",suzu2[i/N][i%N]);
			if((i+1)%N == 0 )
			{
		 		printf("\n");
			
			}	
	}

}




void main()
{
  int sanjiao[N][N] = {0};
  int i,j;
   for(i = 0; i < N; i++)
	{
		for(j = 0; j <= i; j++)//这里的 j<i 很重要，j比i大对值不打印。 
			{
				sanjiao[i][j] = 0;
				if(j == 0 || j ==i)
				  {
					sanjiao[i][j] = 1;
	
				  }
				else
				  {

					sanjiao[i][j] = sanjiao[i-1][j-1]+sanjiao[i-1][j];
				  }		
                                  printf("%-4d",sanjiao[i][j]);
       
			}
		printf("\n");
	}







}
