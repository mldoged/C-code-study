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
//	int* ptr1 = (int*)(&a + 1);//&a��ʾ���������ַ��ƫ�ƺ�ָ��ĩ�ˣ�ת��Ϊint*��ָ��ǰһλ
//	int* ptr2 = (int*)((int)a + 1);//С�˴洢�� 0 x 02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);//ʮ�����ƴ�ӡ
//	return 0;
//}
// 
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ������������һ�����������Ϊ1��3��5��0��0��0
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//*�������У�pΪָ�룬ָ��һ������Ϊ4������Ϊ���ε�����
//	p = a;//int (*)[4]���͡�int (*)[5]��������±겻ͬ���ᱨ�����ı������洢�ĵ�ַ��δ�ı�p������
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);// &p[4][2] == *(*( p + 4 ) + 2);��ַΪ�޷�������%pֱ�����-4�Ĳ���FFFFFFFC
//	return 0;
//}


//p41
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//(*(aa + 1)) == aa[1]
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1)); //���Ϊ10��5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//�ɿ�����char*����*pa��,���ߴ�����Ϊָ�룬ǰ�ߴ����ָ��洢����Ϊchar*
//	pa++;//��Ϊ��work������Ϊchar*����������
//	printf("%s\n", *pa);//���Ϊ��at��
//	return 0;
//}

//int main()
//{
//	char* c[] = { "enter","new","point","first" };//ָ�����飬ÿ��ָ��ָ��ÿ���ַ������ַ���ַ
//	char** cp[] = { c + 3,c + 2,c + 1,c };//cp[0]ָ��first������������
//	char*** cpp = cp;//�����ṹ����ţ���š�first"��ַ���ĵ�ַ
//	printf("%s\n", **++cpp);//��ӡ�ַ���"point"��++cpp��ָ���ţ���š�point"��ַ���ĵ�ַ
//	printf("%s\n", *-- * ++cpp + 3);// ��ӡ�ַ���"er"��++cpp��ָ���ţ���š�new"��ַ���ĵ�ַ,--������ʵ������
//	printf("%s\n", *cpp[-2] + 3);//��ӡ�ַ���"st"��cpp[-2]���ı�ָ���ַ
//	printf("%s\n", cpp[-1][-1] + 1);//��ӡ�ַ���"ew"��
//	return 0;
//}


//P42
//	int *arr[10];//����ָ������ʱ��ָ����С                              //�ַ����������
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
//int main()               //�����ַ���
//{
//	int arr[256] = { 0 };
//	//scanf("%s", arr);//�����ո�ʱ��ֹͣ��ȡ������gets()����
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//assert����
//int main()
//{
//	int i = 1;//
//	assert(i++);//i��Ϊ0�����abort����
//	printf("%d\n", i);
//	return 0;
//}

//����n+nn+nnn+nnnn��ǰi��֮��
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

//��ӡ1-100000����������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//1����i��λ����2����i��ÿһλ����ÿһλλ������֮�ͣ�3�Ƚ�
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

//P43 �ṹ�������/���Լ���/���ݴ洢
//struct student
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct student a, * p = &a;//��һ�ֶ��巽��
//	a.a = 99;
//	printf("%d",a.a);
//	return 0;
//}

//����ˮ����20Ԫ��һԪһƿ������ƿ��һƿ
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
//	for (i = 0; i <= 12; i++)//�Ƿ�����
//	{
//		a[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}

//ʹ����������������ż��ǰ��
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
//	//ÿ��ǰ����һ��ż������Ӻ�����һ����������������
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && arr[left] % 2 == 1)//��ż��
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)//������
//		{
//			right--;
//		}
//		if (left < right)//����
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

//P46�ص�����/ָ�����
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
//	int* ptr2 = (int*)(*(aa + 1));//��ά����(*(aa + 1))ָ��ڶ�����Ԫ��
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1,6
//	return 0;
//}

//��ת�Զ�������ַ���
//1��������ⷨ
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
////2��������ת��
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
//	reverse(arr,arr+k-1);//��ת���
//	reverse(arr+k,arr+len-1);//��ת�ұ�
//	reverse(arr,arr+len-1);//��ת����
//}
//int main()
//{
//	char arr[] = "abcde";
//	//leftmove(arr, 1);
//	leftmove1(arr, 4);
//	printf("%s\n",arr );
//	return 0;
//}
//��һ�ַ�������ԭ�ַ����ظ�׷��һ���ֱ�ӱȽ�abcdefabcdef
//int  is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//strcat(str1,str2):��str1��׷��str2
//	//strncat��ָ��������׷��
//	//strcat(str1, str1);
//	strncat(str1, str1, len1);
//	//strstr�����Ӵ������ص������ַ��ĵ�ַ������Ϊ��ָ��
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

//���Ͼ���ѡȡ���Ͻǻ����½�Ԫ��
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
//	int x = 3;//�����Ͳ���
//	int y = 3;//�����Ͳ���
//	int ret = findnum(arr, k, &x, &y);
//	if (ret == 1)
//		printf("�ҵ���,������%d,%d\n",x,y);
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}


																		//2023.6.16
//P48���ַ������ڴ溯���Ľ��ܣ����ף�1��00��48
//���Ȳ��������ַ�������:strcat��
//�����������ַ���������strncat��
//������Ϣ����:streeor
//�洢�ַ����ķ�ʽΪ1������(��\0) 2�������ַ������Զ����\0��
//int main()//strlen����
//{
//	int len1 = strlen("abcdef");//�����ַ�������,�����޷�����
//	int arr[] = { 'a','b','c','d','e','f' };
//	int len2 = mystrlen(arr);//���ַ����������ַ�������
//							//1���������ķ���
//							//2���ݹ�
//							//3��ָ���ȥָ��
//	printf("%d", len1);
//	return 0;
//}

//�Զ���strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)//��������ֵ���һ������ֵ��Ϊwhile�ж�����
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

//�Զ���strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1 �ҵ�Ŀ�ĵ��ַ�����"\0"
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2 ׷��
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
//	my_strcat(arr1, arr2);//Ŀ�ĵؿռ�����㹻�󣬴�Ŀ�ĵء�\0����ʼ׷��
//	//strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//P49�ַ�������ʹ�������2
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


//P50 �ַ��������ڴ溯��ʹ��������3
//int main()//�ַ����Ƚ� strncmp
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
//int main()//strstr�����ַ�������
////���ĵ�ʱ'NULL'�����ָ�룬��NUL'��'NUL'����\0'
//{
//	char* p1 = "abcdefg";
//	char* p2 = "cd";
//	char* ret = my_strstr(p1, p2);//���ص���Ŀ���ַ����е�һ���ҵ����ַ��ĵ�ַ
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//P51:�ַ�������ʹ�������4
//2023��6��19 �������˽�˵�������ط�δ��1999
//2023��6��20 ��С˵��������ҡ�����취��˼˼��æ
//2023��6��21 ��С˵��ħ�١�
//2023��6��22 ��С˵��ħ�١�
//2023��6��23 ��С˵��ħ�١�
//2023��6��24 ��С˵��ħ�١�
//2023��6��25 ��ã
//2023��6��28 �ҵ�����
//2023��6��29 �ҵ�����
//2023��6��30 ͬʱѧϰ��·ԭ��
//2023��7.1 ������칫����redmibool 2022����6800h��3030����ѧ��·ԭ��
//2023��7.2 ѧ��·ԭ����ְ
//2023��7.3 �ĵ�ͼûͨ�������˹�����������
//2023��7.4 ��������
//2023��7.5 �ҵ��������Կ�ȥ
//2023��7.6 δ�����ԣ���һҹ��ˮ��Ϥ����
//2023��7.7 ���ϵ��ԣ���Ӧ����
//2023��7.8 ��װ���������Ӧ����
//2023��7.9 ��װvs�ȵȣ���Ӧ����
//2023��7.9 �������棬ѧϰc51����
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
//	//char* ret1 = strtok(p1, p2);//strtok���ƻ����и���ַ��� 15:51
//	//char* ret2 = strtok(NULL, p2);
//	//printf("%s\n", ret1);
//	//printf("%s\n", ret2);
//	return 0;
//}
//#include<errno.h>//errno�д洢C���ԵĿ⺯��ִ�й��̵Ĵ�����Ϣ
//int main()
//{
//	//char* str = strerror(errno);//streeor�����ɽ������뷭��Ϊ������Ϣ
//	//printf("%s\n", str);
//	//���ļ�
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//		printf("%s\n",strerror(errno));
//	else
//		printf("Success\n");
//	return 0;
//}
//#include<ctype.h>											//�ж��ַ����ͣ��ڷ�Χ���򷵻ط�0ֵ
//int main()
//{
//	char p = 'w';
//	int ret = islower(p);
//	printf("%d\n", ret);
//	return 0;
//}

//P52:�ַ�������&�ڴ溯��ʹ��������5						//2023.7.12
//void * my_memcpy(void* dest, const void* src, size_t num) //�ڴ濽��
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
//int main()													//ֻҪ�����ص����ڴ濽��
//{
//	struct people arr1[] = { {"����",22},{"����",30} };
//	struct people arr2[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//printf("%s\n", arr2);
//	return 0;
//}

//P53:�ڴ溯������+�ṹ��6
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//int main()														//��Ҫ�����ص����ڴ濽��
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

//int main()//memcpy����
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()//memset����
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);//�ı�����ֽڣ����ֽ�Ϊ��λ
//	return 0;
//}


//P54���Զ�����������-�ṹ�壨һ��							//2023.7.14
//����һ���ṹ������
//struct stu//�ṹ������
//{
//	char name[30];
//	char tele[11];
//	char sex[10];
//	int age;
//};
//typedef struct student//�������ṹ������
//{
//	char name[30];
//	char tele[11];
//	char sex[10];
//	int age;
//}stu;
//struct //�����ṹ������
//{
//	char name[30];
//	char tele[11];
//	char sex[10];
//	int age;
//}s0;
//struct node//�ṹ���������,��ʱ�����������ṹ������
//{
//	int data;
//	struct node* next;
//};
//int main()
//{
////	int arr1[] = { 1,2,3,4,5 };
//	stu s1 = { "huang","17871851867","famale",26 };//����ṹ���������ʼ��
//	printf("%s %s %s %d", s1.name, s1.tele, s1.sex, s1.age);
//	return 0;
//}


//P55���Զ�����������-�ṹ�壨����							//2023.7.15
//�ṹ���ڴ����,�ṹ��Ƕ�׽ṹ��
//#pragma pack(4) //�޸�Ĭ�϶�����
//#pragma pack()  //ȡ���޸ĵ�Ĭ�϶�����
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
//	int ret = offsetof(struct s3, c);//���ؽṹ���Ա�������ʼλ�õ�ƫ����
//	int ret1 = offsetof(struct s3, a);
//	int ret2 = offsetof(struct s3, b);
//	printf("%d\n", sizeof(struct s4));
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}


//P56���Զ�����������-�ṹ�壨����							//2023.7.17
//int main()//�ṹ��Ĵ����봫ַ
//{
//
//	return 0;
//}


//P57���Զ���ṹ�����-λ��
//struct s//44������λ
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


//P58���Զ���ṹ�����-ö�ٺ͹����壨1��
//enum sex//��ʼ��ö�����ͣ���СΪint��С��4
//{
//	male = 1, famale, secure//ö�ٿ���ȡֵ:����,��0��ʼ�����ڴ˸�ֵ
//};
//union un//�����壺���г�Ա����һ��ռ�
//{
//	char a;
//	int b;
//};
//int check_sys()//ʹ�ù�������Դ�С��
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
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}


//P59���Զ���ṹ�����-ö�ٺ͹����壨2��
//int main()
//{
//	
//	return 0;
//}


//P62����̬�ڴ���䣨1��
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