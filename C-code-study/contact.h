#define _CRT_SECURE_NO_WARNINGS 1
#define max 1000
#define max_name 20
#define max_sex 6
#define max_tele 12
#define max_addr 30
#include<string.h>
#include<stdio.h>

enum option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

struct peoinfo//存储单个人信息的结构体
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};

struct contact//通讯录类型结构体
{
	struct peoinfo data[max];
	int size;
};

void Initcontact(struct contact *ps);//声明初始化函数

void addcontact(struct contact* ps);//声明

void showcontact(const struct contact* ps);

void delcontact(struct contact* ps);

void searchcontact(const struct contact* ps);

void modifycontact(struct contact* ps);

void sortcontact(struct contact* ps);