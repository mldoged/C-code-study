#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<errno.h>
#include<malloc.h>
#include<stdio.h>
#include<assert.h>
//#include<math.h>
#include<stddef.h>

//P62����̬�ڴ���䣨1��									2023.7.25
//malloc,free,calloc,realloc
//struct s
//{
//	char name[5];
//	int age;
//};
//int main()//malloc
//{
//	//���ڴ�����10�����οռ�
//	int* p = (int*)malloc(10 * sizeof(int));
////	int* p = (int*)malloc(_CRT_INT_MAX);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//���ٳɹ�������ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	//struct s arr[50];
//	return 0;
//}

//P63����̬�ڴ���䣨2��
//int main()//calloc:��ʼ��ÿ���ڴ�ռ�Ϊ��0��
//{
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//���ٳɹ�������ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()//realloc:������̬�����ڴ�ռ�Ĵ�С
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//ʹ��malloc���ٵ�20���ֽڿռ�
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//20�������ˣ���20���ֽڿռ�
//	//ʹ��realloc�����ռ�
//	//1:���Pָ��Ŀհ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�P
//	//2:���Pָ��Ŀհ�֮�����㹻���ڴ�ռ����׷�ӣ��������������µ��ڴ����򿪱��µ������ռ䲢����
//	//	ԭ���ݣ����ͷžɵ��ڴ�ռ䣬��󷵻����ڴ��ĵ�ַ
//	//3;����һ���µı���������realloc�����ķ���ֵ
//	int *p1 = realloc(p, 40);
//	if (p1 != NULL)//���ٳɹ�
//	{
//		p = p1;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	int i = 0;
//	return 0;
//}
//�������⣺1Խ����ʣ�2��ָ��ֱ�Ӹ�ֵ��3�ԷǶ�̬�ڴ����ָ��free��4��free�ͷŶ�̬�ڴ��һ����
//�������⣺5��ͬһ�鶯̬�ڴ����ͷţ�6��̬�����ڴ������ͷţ��ڴ�й©��
 
 
//P64����̬�ڴ���䣨3��
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	int* p2 = realloc(p, 100);
	//int *p2= realloc(NULL,40);��ʱ���ܵȼ���malloc��40��
	if (p2 != NULL)
	{
		p = p2;
	}

	return 0;
}