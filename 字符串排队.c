#include <stdio.h>
#include <string.h>
void main()
{
	char str[200];
	printf("please input your string:");
	scanf("%s",str);
	char cp[100];
	printf("please input you need copy string:");
	scanf("%s",cp);

	int strlenth,cplenth;
	strlenth=strlen(str);
	cplenth=strlen(cp);
	int max=0;
	int i,j,k,l;
	for(i=0;i<strlenth;i++)
	{
		if(str[i]>str[max])
			max=i;
	
	}
	for(j=0;j<strlenth-1-max;j++)
	{
		str[strlenth+cplenth-1-j]=str[strlenth-1-j];
	}
	for(k=0;k<cplenth;k++)
	  str[max+1+k]=cp[k];
	str[strlenth+cplenth]='\0';
	printf("%s",str);

}
