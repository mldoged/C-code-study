//P60��C����С��Ŀ��ͨѶ¼ʵ�֣�1��							2024.5.3
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("***********  ͨѶ¼   *********\n");
	printf("***  1.add         2.del    ***\n");
	printf("***  3.serach      4.modify ***\n");
	printf("***  5.show        6.sort   ***\n");
	printf("***  7.save        0.exit   ***\n");
	printf("*******************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct contact con;//con��ͨѶ¼�����n����Ϣ�͵�ǰ����
	//��ʼ��ͨѶ¼����ȡԭ�ȱ������ļ��е�����
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
		case save:
			savecontact(&con);
			break;
		case eexit:
			//�˳�ǰ���沢����ͨѶ¼���ͷŶ�̬���ٵ��ڴ�
			savecontact(&con);
			destroycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

