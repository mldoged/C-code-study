#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


//查找函数，找到则返回下标，没找到返回-1。去除冗余
static int findbyname(const struct contact* ps,char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	}
	if (i == ps->size)
		return -1;
}


//初始化通讯录
void Initcontact(struct contact *ps)
{
	ps->data = (struct peoinfo*)malloc(default_sz * sizeof(struct peoinfo));
	if (ps->data == NULL)
		return;
	ps->size = 0;
	ps->capacity= default_sz;
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0;//设置通讯录最初只有一个元素
}

//检测当前通讯录的容量
void Checkcapacity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		peoinfo *ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(peoinfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");
	}
}
//增加元素
void addcontact(struct contact* ps)
{
	//检测当前通讯录的容量
	//1.满了就增加容量
	//2.不满就跳过
	Checkcapacity(ps);

	printf("请输入名字:>\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>\n");
	scanf("%s", ps->data[ps->size].addr); 
	printf("添加成功！\n");
	ps->size ++;


	//if (ps->size == max)
	//{
	//	printf("通讯录已满！\n");
	//}
	//else
	//{
	//	printf("请输入名字:>\n");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("请输入年龄:>\n");
	//	scanf("%d", &(ps->data[ps->size].age));
	//	printf("请输入性别:>\n");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话:>\n");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("请输入地址:>\n");
	//	scanf("%s", ps->data[ps->size].addr); 
	//	printf("添加成功！\n");
	//	ps->size ++;
	//}
}


//显示通讯录元素
void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空！\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",//-左对齐
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}


//删除通讯录元素
void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入需删除人的名字。\n");
	scanf("%s", name);
	//查找要删除的人在什么位置
	int pos = findbyname(ps,name);
	if(pos==-1)
	{
		printf("要删除的人不存在！\n");
	}
	else
		//删除
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功！\n");
	}
}


//查找通讯录指定人名字
void searchcontact(const struct contact* ps)
{
	char name[max_name];
	printf("请输入需查找人的名字。\n");
	scanf("%s", name);
	//查找要删除的人在什么位置
	int pos = findbyname(ps, name);
	if (pos == -1)
		printf("要查找的人不存在！\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",//-左对齐
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

//修改指定联系人
void modifycontact(struct contact* ps)
{
	char name[max_name];
	printf("请输入需修改信息的人的名字。\n");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (pos == -1)
		printf("要修改信息的人不存在！\n");
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功！\n");
	}
}

//排序
void sortcontact(struct contact* ps)
{

}