#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct task1
{
	char name[10];
	char phone[30];


};

union task2
{
	char firstname[30];
	int secondname;

};

struct task3
{
	struct task1 info;
	union task2 schoolname;



};
void main()
{
	printf("习题1,创建一个通讯录结构体，并对他初始化与指针初始化，然后打印出来数据\n");
	struct task1 info;
	struct task1 *p;
	p=&info;
	strcpy(info.name,"送终机");
	printf("%s\n",info.name);
	printf("%s\n",p->name);
	strcpy(info.phone,"13xxxxxxxxx");
	printf("%s\n",info.phone);
	printf("%s\n",p->phone);
	printf("习题2,创建一个共用体，容纳如海淀中学，101中学等名词，并对他初始化与指针初始化，打印数据\n");
	union task2 school;
	union task2 *schoolp=&school;
	strcpy(school.firstname,"中央人民大学");
	printf("%s\n",schoolp->firstname);
	printf("创建一个学生结构体，内容含上述通讯录结构体与学校名称共用体，直接初始化并打印\n");
	struct task3 result;
	struct task3 *resultp = &result;
	strcpy(result.info.name,"洗衣机");
	strcpy(result.info.phone,"134xxxxxxx");
	strcpy(result.schoolname.firstname,"中央人民大学");
	printf("%s\n",resultp->info.name);
	printf("%s\n",resultp->info.phone);
	printf("%s\n",resultp->schoolname.firstname);
}
