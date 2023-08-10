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

//P67：动态内存分配（6）

int main()
{
	//划水
	//emo
	//划水
	return 0;
}