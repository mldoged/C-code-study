#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<math.h>
#include<stddef.h>

//p40 6.14
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//&a表示数组整体地址，偏移后指向末端，转换为int*后指向前一位
//	int* ptr2 = (int*)((int)a + 1);//小端存储， 0 x 02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);//十六进制打印
//	return 0;
//}
// 
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式算出来的是最后一个，这个数组为1，3，5，0，0，0
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//*在括号中，p为指针，指向一个个数为4，类型为整形的数组
//	p = a;//int (*)[4]”和“int (*)[5]”数组的下标不同，会报错，仅改变了所存储的地址，未改变p的类型
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);// &p[4][2] == *(*( p + 4 ) + 2);地址为无符号数，%p直接输出-4的补码FFFFFFFC
//	return 0;
//}


//p41
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//(*(aa + 1)) == aa[1]
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1)); //结果为10，5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//可看作（char*）（*pa）,后者代表本身为指针，前者代表此指针存储类型为char*
//	pa++;//因为“work”类型为char*，整个跳过
//	printf("%s\n", *pa);//输出为“at”
//	return 0;
//}

//int main()
//{
//	char* c[] = { "enter","new","point","first" };//指针数组，每个指针指向每个字符串首字符地址
//	char** cp[] = { c + 3,c + 2,c + 1,c };//cp[0]指向“first”，逆向排序
//	char*** cpp = cp;//三级结构，存放（存放“first"地址）的地址
//	printf("%s\n", **++cpp);//打印字符串"point"；++cpp后指向存放（存放“point"地址）的地址
//	printf("%s\n", *-- * ++cpp + 3);// 打印字符串"er"；++cpp后指向存放（存放“new"地址）的地址,--不参与实际运算
//	printf("%s\n", *cpp[-2] + 3);//打印字符串"st"；cpp[-2]不改变指向地址
//	printf("%s\n", cpp[-1][-1] + 1);//打印字符串"ew"；
//	return 0;
//}


//P42
//	int *arr[10];//定义指针数组时需指定大小                              //字符串倒序输出
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()               //逆序字符串
//{
//	int arr[256] = { 0 };
//	//scanf("%s", arr);//遇到空格时会停止读取，可用gets()代替
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//assert测试
//int main()
//{
//	int i = 1;//
//	assert(i++);//i改为0会调用abort报错
//	printf("%d\n", i);
//	return 0;
//}

//计算n+nn+nnn+nnnn等前i项之和
//int main()
//{
//	int n = 0;
//	int i = 5;
//	scanf("%d", &n);
//	int sum = 0;
//	int x = 0;
//	int ret = 0;
//	for (x = 0; x < i; x++)
//	{
//		ret = ret * 10 + n;
//		sum = ret + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印1-100000所有自幂数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//1计算i的位数，2计算i的每一位并求每一位位数次幂之和，3比较
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if(i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//P43 结构体测试题/调试技巧/数据存储
//struct student
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct student a, * p = &a;//另一种定义方法
//	a.a = 99;
//	printf("%d",a.a);
//	return 0;
//}

//喝汽水，有20元，一元一瓶，两空瓶换一瓶
//int main()
//{
//	int m = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &m);
//	total = m;
//	empty = m;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)//非法访问
//	{
//		a[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}

//使数组中所有奇数在偶数前面
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	//每从前面找一个偶数，则从后面找一个奇数，交换他们
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && arr[left] % 2 == 1)//找偶数
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)//找奇数
//		{
//			right--;
//		}
//		if (left < right)//交换
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//P46回调函数/指针进阶
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2.5
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//二维数组(*(aa + 1))指向第二行首元素
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1,6
//	return 0;
//}

//旋转自定义个数字符串
//1、暴力求解法
//void leftmove(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j <= len - 2; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len-1] = tmp;
//	}
//}
////2、三步翻转法
////abcdef
////bafedc
////cdefab
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void leftmove1(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//翻转左边
//	reverse(arr+k,arr+len-1);//翻转右边
//	reverse(arr,arr+len-1);//翻转整体
//}
//int main()
//{
//	char arr[] = "abcde";
//	//leftmove(arr, 1);
//	leftmove1(arr, 4);
//	printf("%s\n",arr );
//	return 0;
//}
//另一种方法：将原字符串重复追加一遍后直接比较abcdefabcdef
//int  is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//strcat(str1,str2):在str1后追加str2
//	//strncat：指定个数的追加
//	//strcat(str1, str1);
//	strncat(str1, str1, len1);
//	//strstr：找子串，返回的是首字符的地址，否则为空指针
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//杨氏矩阵：选取右上角或左下角元素
//int findnum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px-1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;//返回型参数
//	int y = 3;//返回型参数
//	int ret = findnum(arr, k, &x, &y);
//	if (ret == 1)
//		printf("找到了,坐标是%d,%d\n",x,y);
//	else
//		printf("找不到\n");
//	return 0;
//}


																		//2023.6.16
//P48：字符串与内存函数的介绍（进阶）1：00：48
//长度不受限制字符串函数:strcat等
//长度受限制字符串函数：strncat等
//错误信息报告:streeor
//存储字符串的方式为1、数组(无\0) 2、常量字符串（自动添加\0）
//int main()//strlen函数
//{
//	int len1 = strlen("abcdef");//常量字符串长度,返回无符号数
//	int arr[] = { 'a','b','c','d','e','f' };
//	int len2 = mystrlen(arr);//三种方法求数组字符串长度
//							//1、计数器的方法
//							//2、递归
//							//3、指针减去指针
//	printf("%d", len1);
//	return 0;
//}

//自定义strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)//精华；赋值后加一，再用值作为while判断条件
//	{
//		;
//	}
//	return ret;
//
//}
//int main()//
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr2);
//	return 0;
//}

//自定义strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1 找到目的地字符串的"\0"
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);//目的地空间必须足够大，从目的地“\0”开始追加
//	//strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//P49字符串函数使用与解剖2
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()//strcmp
//{
//	char* p1 = "abcdef";
//	char* p2 = "abadef";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//P50 字符函数、内存函数使用与剖析3
//int main()//字符串比较 strncmp
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//		return p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()//strstr查找字符串函数
////查文档时'NULL'代表空指针，‘NUL'与'NUL'代表‘\0'
//{
//	char* p1 = "abcdefg";
//	char* p2 = "cd";
//	char* ret = my_strstr(p1, p2);//返回的是目的字符串中第一个找到的字符的地址
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//P51:字符串函数使用与解剖4
//2023、6、19 看不良人解说，卖掉重返未来1999
//2023、6、20 看小说“序列玩家”，想办法请思思帮忙
//2023、6、21 看小说“魔临”
//2023、6、22 看小说“魔临”
//2023、6、23 看小说“魔临”
//2023、6、24 看小说“魔临”
//2023、6、25 迷茫
//2023、6、28 找到工作
//2023、6、29 找到工作
//2023、6、30 同时学习电路原理
//2023、7.1 咸鱼买办公本，redmibool 2022锐龙6800h（3030）；学电路原理
//2023、7.2 学电路原理，入职
//2023、7.3 心电图没通过，丢了工作，接着找
//2023、7.4 工作被抢
//2023、7.5 找到工作，吃苦去
//2023、7.6 未带电脑，第一夜划水熟悉环境
//2023、7.7 带上电脑，适应工作
//2023、7.8 安装各软件，适应工作
//2023、7.9 安装vs等等，适应工作
//2023、7.9 步入正规，学习c51三章
//int main()													//strtok
//{
//	char p[30] = "1692470435@QQ.COM.test";
//	char p1[1024] = { 0 };
//	strcpy(p1, p);
//	char* p2 = "@.";
//	char* ret = NULL;
//	for (ret = strtok(p1, p2); ret != NULL; ret = strtok(NULL, p2))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret1 = strtok(p1, p2);//strtok会破坏被切割的字符串 15:51
//	//char* ret2 = strtok(NULL, p2);
//	//printf("%s\n", ret1);
//	//printf("%s\n", ret2);
//	return 0;
//}
//#include<errno.h>//errno中存储C语言的库函数执行过程的错误信息
//int main()
//{
//	//char* str = strerror(errno);//streeor函数可将错误码翻译为错误信息
//	//printf("%s\n", str);
//	//打开文件
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//		printf("%s\n",strerror(errno));
//	else
//		printf("Success\n");
//	return 0;
//}
//#include<ctype.h>											//判断字符类型，在范围内则返回非0值
//int main()
//{
//	char p = 'w';
//	int ret = islower(p);
//	printf("%d\n", ret);
//	return 0;
//}

//P52:字符串函数&内存函数使用与剖析5						//2023.7.12
//void * my_memcpy(void* dest, const void* src, size_t num) //内存拷贝
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		++(char*)src;
//	}
//	return ret;
//}
//struct people
//{
//	char name[30];
//	int age;
//};
//int main()													//只要求处理不重叠的内存拷贝
//{
//	struct people arr1[] = { {"张三",22},{"李四",30} };
//	struct people arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//printf("%s\n", arr2);
//	return 0;
//}

//P53:内存函数讲解+结构体6
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//int main()														//可要求处理不重叠的内存拷贝
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr1, arr1+2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()//memcpy函数
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()//memset函数
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);//改变的是字节，以字节为单位
//	return 0;
//}


//P54：自定义数据类型-结构体（一）							//2023.7.14
//声明一个结构体类型
//struct stu//结构体类型
//{
//	char name[30];
//	char tele[11];
//	char sex[10];
//	int age;
//};
//typedef struct student//重命名结构体类型
//{
//	char name[30];
//	char tele[11];
//	char sex[10];
//	int age;
//}stu;
//struct //匿名结构体类型
//{
//	char name[30];
//	char tele[11];
//	char sex[10];
//	int age;
//}s0;
//struct node//结构体的自引用,此时不可重命名结构体类型
//{
//	int data;
//	struct node* next;
//};
//int main()
//{
////	int arr1[] = { 1,2,3,4,5 };
//	stu s1 = { "huang","17871851867","famale",26 };//定义结构体变量并初始化
//	printf("%s %s %s %d", s1.name, s1.tele, s1.sex, s1.age);
//	return 0;
//}


//P55：自定义数据类型-结构体（二）							//2023.7.15
//结构体内存对齐,结构体嵌套结构体
//#pragma pack(4) //修改默认对齐数
//#pragma pack()  //取消修改的默认对齐数
//
//int main()
//{
//	struct s3
//	{
//		double c;
//		int a;
//		char b;
//	};
//	struct s4
//	{
//		char d;
//		struct s3 s1;
//		double e;
//	};
//	struct s4 ss = { 0 };
//	int ret = offsetof(struct s3, c);//返回结构体成员相对于起始位置的偏移量
//	int ret1 = offsetof(struct s3, a);
//	int ret2 = offsetof(struct s3, b);
//	printf("%d\n", sizeof(struct s4));
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}


//P56：自定义数据类型-结构体（三）							//2023.7.17
//int main()//结构体的传参与传址
//{
//
//	return 0;
//}


//P57：自定义结构体变量-位段
//struct s//44个比特位
//{
//	int a : 3;
//	int b : 4;
//	int c : 5;
//	int d : 4;
//};
//int main()
//{
//	struct s s1 = { 0 };
//	s1.a = 10;
//	s1.b = 20;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}


//P58：自定义结构体变量-枚举和共用体（1）
//enum sex//初始化枚举类型，大小为int大小：4
//{
//	male = 1, famale, secure//枚举可能取值:常量,从0开始，可在此赋值
//};
//union un//共用体：所有成员共有一块空间
//{
//	char a;
//	int b;
//};
//int check_sys()//使用共用体测试大小端
//{
//	union un
//	{
//		char a;
//		int b;
//	}a;
//	a.b = 1;
//	return a.a;
//}
//int main()
//{
//	//union un un0;
//	//union un un1;
//	//printf("%d\n", &un0);
//	//printf("%d\n", &un0.b);
//	/*enum sex s = male;
//	enum sex s1 = male;*/
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


//P59：自定义结构体变量-枚举和共用体（2）
//int main()
//{
//	
//	return 0;
//}


//P62：动态内存分配（1）
/* struct s
{
	char name[5];
	int age;
};
int main()
{
	struct s arr[50];
	return 0;
} */