#include <stdio.h>
#define N 2000
void main()
{
	int result[N]={1};
	int i,j,k;
	int number;
	printf("please input your number:");
	scanf("%d",&number);
	int jin_wei=0,cheng_ji;
	for(i=2;i<number+1;i++)
	{
		for(j=0;j<N;j++)
		{
			cheng_ji=result[j]*i+jin_wei;
			result[j]=cheng_ji%10;
			jin_wei=cheng_ji/10;
	
		}
	}
	for(i=N-1;i>0;i--)
	{
		if(result[i] != 0)
			break;

	}
	for(k=i;k>0;k--)
	  printf("%d",result[k]);



}	
