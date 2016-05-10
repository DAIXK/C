#include<stdio.h>
#include<stdlib.h>

void mystrset(char *p,char ch) //替换函数
{
	while(*p != '\0')
	{
		*p=ch;
		p++;
	}

}

unsigned int mystrlen( const char *string)  //计数函数
{
	int i=0;
	while(*string != '\0')
	{
		string++;
		i++;
	}
	return i;
}

void mystrrev(char *string)  //倒序输出函数
{
	int lenth =mystrlen(string);
	int i;
	char temp;
	for(i=0;i<lenth/2;i++)
	{
		temp = string[i];
		string[i] = string[lenth-1-i];
		string[lenth-1-i] = temp;
	}

}

void mystrcpy(char *str,char *copy )   //复制字符串
{
	if(str == NULL  || copy == NULL)
	{
		return;
	}
	while(*copy != '\0')
	{
		*str = *copy;
		str++;
		copy++;
	}
	*str = '\0';  //使原来字符串最后一个为‘\0’
}

void main()
{
	char b[10]="asdcv";
	char a[20]="abcdess";
	mystrcpy(a,b);
	printf("%s",a);


}
