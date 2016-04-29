#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int i,j,k=1;
	for(i = 0;i <3;i++)
	{for(j = 0; j < 4;j++)
	  {
		a[i][j] = k++; 
	  
		printf("%-2d %p  ",a[i][j],&a[i][j]);
	  
	  }
	  printf("\n");
	}

	printf("\na=%p *a=%p",a,*a); //a为行地址，16个字节，×a为列地址，4个字节
	printf("\na:%ld *a:%ld\n",sizeof(*a),sizeof(**a));
	printf("%p %p %p\n",a[0],*(a+0),a+0); 
	// a[0]=*(a+0) 而 a+0 代表第一行的首地址 
	printf("%ld %ld %ld\n",sizeof(*a[0]),sizeof(**(a+0)),sizeof(*(a+0)));
	printf("%p %p\n",&a[1][0],*((a+1)+0));	
	printf("%ld %ld\n",sizeof(*&a[1][0]),sizeof(**((a+1)+0)));



}




