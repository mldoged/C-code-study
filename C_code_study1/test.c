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
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 100);
//	//int *p2= realloc(NULL,40);��ʱ���ܵȼ���malloc��40��
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	return 0;
//}

//P65����̬�ڴ���䣨4��									2023.7.28
//char* getmemory(void)//�Ҵ���
//{
//	static char p[] = "hello world";//�ֲ�������ջ���������������١�����static
//	return p;//malloc���ٵĿռ��ڶ�������free�������
//}
//void test(void)
//{
//	char* str = NULL;//ָ�붨��ʱ�����ʼ������Ȼ����Ұָ��
//	str = getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}


//void getmemory(char** p, int num)//�Ҵ����ڴ�й©
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�Ľ�
//	free(str);
//	str = NULL;
//}
//int main()													//2023.7.29<������C/C++���>
//{
//	test();
//	return 0;
//}


//P66����̬�ڴ���䣨5��//��������								2023.8.5
//struct S 
//{
//	int a;
//	int arr[0]; 
//};
//int main()
//{
//	int i = 0;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->a = 100;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S *ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//P67����̬�ڴ���䣨6��								4.21

//int main()
//{

//}


//P70 �ļ�������1��											4.21
//int main()
//{
//	int a = 10000;
//
//	FILE* f = fopen("filetest.txt", "wb");
//	fwrite(&a, 4, 1, f);
//	fclose(f);
//	f = NULL;
//
//	return 0;
//}

//P71 �ļ�������2��											4.21
//����·�������·��
//..��ʾ��һ��·��
//. ��ʾ��ǰ·��
//int main()//д�ļ�
//{
//	//fopen("../../filetest.txt", "r");
//	FILE * fp = fopen("D:\\gitproject\\C_code_study1\\filetest.txt", "w");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	fputc('b',fp);
//	fputc('i',fp);
//	fputc('t',fp);
//	//�ر��ļ�
//	fclose(fp);
//	fp = NULL;
//	return 0;
//} 

//int main()//���ļ�											5.2
//{
//	FILE* fpr = fopen("filetest.txt","r");
//	if (fpr == NULL)//��ʧ��
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	printf("%c", fgetc(fpr));
//	printf("%c", fgetc(fpr));
//	printf("%c", fgetc(fpr));
//	//�ر��ļ�
//	fclose(fpr);
//	fpr = NULL;
//	return 0;
//}

//P72 �ļ�������3��	
//��׼���������
//int main()
//{
//	char ch[1024] = { 0 };
//	fgets(ch,1024,stdin);//gets(ch);
//	fputs(ch,stdout);//puts(ch);
//	return 0;
//}

//struct Struluanxie
//{
//	int i;
//	float j;
//	char ch[10];
//}typedef s;
//int main()
//{
//	s test = {1,3.14,"huang"};
//	FILE* fpr = fopen("filetest.txt","w");
//	if (fpr == NULL)//��ʧ��
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	
//	fprintf(fpr,"%d %f %s",test.i,test.j,test.ch);
//
//	//�ر��ļ�
//	fclose(fpr);
//	fpr = NULL;
//	return 0;
//}

////P73 �ļ�������4��
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "zhangsan", 20, 55.6 };//д
//	struct S temp = { 0 };//��
//	FILE* pf = fopen("filetest.txt","rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�򿪳ɹ�
//	//fwrite(&s,sizeof(struct S),1,pf);//д
//	fread(&temp, sizeof(struct S), 1, pf);//��
//	printf("%s %d %f",temp.name,temp.age,temp.score);//��
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char ch;
//	FILE* pf = fopen("filetest.txt","r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//	//��ȡ�ļ�
//	ch = fgetc(pf);
//	printf("%c\n",ch);
//	int i = ftell(pf);
//	printf("%d\n", i);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//P74 �ļ�����(5) 
//int main()
//{
//ferror
//feof
//	return 0;
//}

//P75 ��ҵ����
#pragma pack(4)
struct test {
	short m;//0-1
	char i;//2
	//3
	long j;//4-7
	long j;//8-11
	//ƫ����11��1=12��12Ϊshort��char��long��С��������ı������ʽṹ���СΪ12
};

//P76 C����Ԥ����1��								5.4
int main()
{

	return 0;
}