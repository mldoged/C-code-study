//P60：C语言小项目：通讯录实现（1）							2023.7.18
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("***********  通讯录   *********\n");
	printf("***  1.add         2.del    ***\n");
	printf("***  3.serach      4.modify ***\n");
	printf("***  5.show        6.sort   ***\n");
	printf("***  0.exit                 ***\n");
	printf("*******************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct contact con;//con即通讯录，存放n人信息和当前人数
	//初始化通讯录
	Initcontact(&con);
	do
	{
		menu();

		printf("请选择-->");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case eexit:
			//退出前销毁通讯录，释放动态开辟的内存
			destroycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}