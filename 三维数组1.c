#include <stdio.h>
void main()
{
int i,j,k;
int num = 0;
int a[3][4][5];
        for(i = 0; i < 3;  i++)
        {
                for(j = 0; j < 4; j++)
                {
                        for(k = 0; k < 5; k++)
                        {
                                a[i][j][k] = num++;
                                printf("%-2d",a[i][j][k]);


                        }
                printf("\n");
                }
        printf("\n");
        }
        printf("%p\n %p",&a[0][0][1],&a[0][0][0]);
}
~                        
