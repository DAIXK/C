#include <stdio.h>

#include<conio.h>
#include <stdlib.h>

int all_days(int year,int month,int day) //求出总天数,利用蔡勒公式内的 [13*(M+1)/5]-7+(M-1)*28+d+i

{                                        //M为月份，d为日期，i为是否闰年

    int i,sum;

    if(year%4 == 0|| year%100 != 0 && year%400 == 0 )

        i=1;

    else

        i=0;

    sum=(13*(month+1)/5)-7+(month-1)*28+day+i;  //把每个月看成28天，[13*(M+1)/5]-7 结果为少了的天数,怎么推出来我也不懂



    return sum;

}

int week(int year,int month,int day) //求出当前时间的星期数

{

    int the_week;

    the_week=((year-1)+((year-1)/4-(year-1)/100+(year-1)/400)+all_days(year,month,day))%7;

    // 这里的[...]里面的公式求出当前年份里面的闰年，/4 分成4份，里面/100的不是闰年要减去，/100的为闰年又加上 从公元0年开始

    //这里%7 的余数为0~6 对应星期日~星期六

    return the_week;

}

void print_week(int year,int month,int day) // 打印星期数

{

    int i;

    i=week(year,month,day);

    switch(i)

    {

       case 0:printf("星期日\n");break;

       case 1:printf("星期一\n");break;

       case 2:printf("星期二\n");break;

       case 3:printf("星期三\n");break;

       case 4:printf("星期四\n");break;

       case 5:printf("星期五\n");break;

       case 6:printf("星期六\n");break;



    }

}

int this_month(int year,int month)

{

   int day;

   switch(month)

   {

       case 1:day=31;break;

       case 2:day=(year%4 == 0|| year%100 != 0 && year%400 == 0)?29:28;break;

       case 3:day=31;break;

       case 4:day=30;break;

       case 5:day=31;break;

       case 6:day=30;break;

       case 7:day=31;break;

       case 8:day=31;break;

       case 9:day=30;break;

       case 10:day=31;break;

       case 11:day=30;break;

       case 12:day=31;break;

   }

   return day;

}

void printf_mian(int year,int month,int day)

{

    int a,b,c,d,e,f;

    f=this_month(year,month);

    c=week(year,month,day);

    system("cls");

    printf("\t\t%10d年 %d月\n",year,month);

        printf("\n");

        printf("\t      日  一  二  三  四  五  六 \n");

        printf("\t    ");

        e=0;

        for(a=0;a<c;a++)

        {

            printf("    ");

            e++;

        }

        int h=1;

        f=f+e;

        for(;e<f;e++)

        {

            if(e%7==0)

            {

                printf("\n\n");

                printf("\t    ");

            }

            printf("%4d",h++);

        }

        printf("\n\n");

        printf("\t\tQ:退出 W:上一月 E:下一月\n\n");







}





void main()

{

    int year,month,day=1;

    printf("\n请输入你要查询的年份与月份，eg: 20XX-XX\n");

    scanf("%d-%d",&year,&month);

    if( month > 12 || month == 0 || day > 31 || day == 0)

        printf("month or day is Error\n");



    char ch;

    while(1)

    {

       printf_mian(year,month,day);

        do

        {

            ch=getch();

            if(ch=='w'||ch=='W')

            {

                month-=1;

                if(month<1)

                    {

                        month=12;

                        year-=1;



                    }

            }



            if(ch=='e'||ch=='E')

                {

                    month+=1;

                    if(month>12)

                    {

                        month=1;

                        year+=1;

                    }

                }

            if(ch=='q'||ch=='Q')

            {

                exit(0);

            }



        }while(ch!='q'&&ch!='Q'&&ch!='w'&&ch!='W'&&ch!='e'&&ch!='E');









    }





}
