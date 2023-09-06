#define _CRT_SECURE_NO_WARNINGS 1
//#define max 1000										动态数组不需要
#define max_name 20
#define max_sex 6
#define max_tele 12
#define max_addr 30
#define default_sz 3//初始默认通讯录个数
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

enum option
{
	eexit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

typedef struct peoinfo//存储单个人信息的结构体
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}peoinfo;

typedef struct contact//通讯录类型结构体
{
	struct peoinfo *data;//存放1000个信息
	int size;//记录数组当前元素个数
	int capacity;//记录数组最大容量
}contact;

void Initcontact(struct contact *ps);//声明初始化函数

void addcontact(struct contact* ps);//声明

void showcontact(const struct contact* ps);

void delcontact(struct contact* ps);

void searchcontact(const struct contact* ps);

void modifycontact(struct contact* ps);

void sortcontact(struct contact* ps);

void destroycontact(contact* ps);