//P60��C����С��Ŀ��ͨѶ¼ʵ�֣�1��							2023.7.18
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("***********  ͨѶ¼   *********\n");
	printf("***  1.add         2.del    ***\n");
	printf("***  3.serach      4.modify ***\n");
	printf("***  5.show        6.sort   ***\n");
	printf("***  0.exit                 ***\n");
	printf("*******************************\n");
}
struct contact con;//con��ͨѶ¼�����1000����Ϣ�͵�ǰ����
int main()
{
	int input = 0;
	//����ͨѶ¼

	//��ʼ��ͨѶ¼
	Initcontact(&con);
	do
	{
		menu();

		printf("��ѡ��-->");
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
		case exit:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}