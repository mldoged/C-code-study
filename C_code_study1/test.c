#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<errno.h>
#include<malloc.h>
#include<stdio.h>
#include<assert.h>
//#include<math.h>
#include<stddef.h>

//P62：动态内存分配（1）									2023.7.25
//malloc,free,calloc,realloc
//struct s
//{
//	char name[5];
//	int age;
//};
//int main()//malloc
//{
//	//向内存申请10个整形空间
//	int* p = (int*)malloc(10 * sizeof(int));
////	int* p = (int*)malloc(_CRT_INT_MAX);
//	if (p == NULL)
//	{
//		//打印错误原因的方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//开辟成功，正常使用
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

//P63：动态内存分配（2）
//int main()//calloc:初始化每个内存空间为‘0’
//{
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		//打印错误原因的方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//开辟成功，正常使用
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


//int main()//realloc:调整动态开辟内存空间的大小
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		//打印错误原因的方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//使用malloc开辟的20个字节空间
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//20个不够了，加20个字节空间
//	//使用realloc调整空间
//	//1:如果P指向的空白之后有足够的内存空间可以追加，则直接追加，后返回P
//	//2:如果P指向的空白之后无足够的内存空间可以追加，则另外重新找新的内存区域开辟新的完整空间并拷贝
//	//	原数据，并释放旧的内存空间，最后返回新内存块的地址
//	//3;得用一个新的变量来接受realloc函数的返回值
//	int *p1 = realloc(p, 40);
//	if (p1 != NULL)//开辟成功
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
//常见问题：1越界访问；2空指针直接赋值；3对非动态内存分配指针free；4用free释放动态内存的一部分
//常见问题：5对同一块动态内存多次释放；6动态开辟内存忘记释放（内存泄漏）
 
 
//P64：动态内存分配（3）
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 100);
//	//int *p2= realloc(NULL,40);此时功能等价于malloc（40）
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	return 0;
//}

//P65：动态内存分配（4）									2023.7.28
//char* getmemory(void)//找错误
//{
//	static char p[] = "hello world";//局部变量在栈区，出函数会销毁。加了static
//	return p;//malloc开辟的空间在堆区，不free不会回收
//}
//void test(void)
//{
//	char* str = NULL;//指针定义时必须初始化，不然就是野指针
//	str = getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}


//void getmemory(char** p, int num)//找错误，内存泄漏
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改进
//	free(str);
//	str = NULL;
//}
//int main()													//2023.7.29<高质量C/C++编程>
//{
//	test();
//	return 0;
//}


//P66：动态内存分配（5）//柔性数组								2023.8.5
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

//P67：动态内存分配（6）								4.21

//int main()
//{

//}


//P70 文件操作（1）											4.21
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

//P71 文件操作（2）											4.21
//绝对路径、相对路径
//..表示上一级路径
//. 表示当前路径
//int main()//写文件
//{
//	//fopen("../../filetest.txt", "r");
//	FILE * fp = fopen("D:\\gitproject\\C_code_study1\\filetest.txt", "w");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	fputc('b',fp);
//	fputc('i',fp);
//	fputc('t',fp);
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//	return 0;
//} 

//int main()//读文件											5.2
//{
//	FILE* fpr = fopen("filetest.txt","r");
//	if (fpr == NULL)//打开失败
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	printf("%c", fgetc(fpr));
//	printf("%c", fgetc(fpr));
//	printf("%c", fgetc(fpr));
//	//关闭文件
//	fclose(fpr);
//	fpr = NULL;
//	return 0;
//}

//P72 文件操作（3）	
//标准输入输出流
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
//	if (fpr == NULL)//打开失败
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	
//	fprintf(fpr,"%d %f %s",test.i,test.j,test.ch);
//
//	//关闭文件
//	fclose(fpr);
//	fpr = NULL;
//	return 0;
//}

////P73 文件操作（4）
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "zhangsan", 20, 55.6 };//写
//	struct S temp = { 0 };//读
//	FILE* pf = fopen("filetest.txt","rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//打开成功
//	//fwrite(&s,sizeof(struct S),1,pf);//写
//	fread(&temp, sizeof(struct S), 1, pf);//读
//	printf("%s %d %f",temp.name,temp.age,temp.score);//读
//	//关闭文件
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
//	//定位文件指针
//	fseek(pf, -2, SEEK_END);
//	//读取文件
//	ch = fgetc(pf);
//	printf("%c\n",ch);
//	int i = ftell(pf);
//	printf("%d\n", i);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//P74 文件操作(5) 
//int main()
//{
//ferror
//feof
//	return 0;
//}

//P75 作业讲解
#pragma pack(4)
struct test {
	short m;//0-1
	char i;//2
	//3
	long j;//4-7
	long j;//8-11
	//偏移量11加1=12，12为short、char、long大小的最大数的倍数，故结构体大小为12
};

//P76 C语言预处理（1）								5.4
int main()
{

	return 0;
}