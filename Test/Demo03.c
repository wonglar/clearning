#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int i;
//int main()
//{
//	i--;
//
//	if (i > sizeof(i))   // sizeof()结果返回的是unsigned int
//	{
//		printf(">\n");   // >
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}



// 求水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//1.计算i为几位数 n
//		int n = 1;
//		int tmp = i;
//		while (tmp = tmp / 10)
//		{
//			n++;
//		}
//	
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\n ");
//	return 0;
//}




// 字符串逆序
#include <string.h>
//void reverse(char* str)
//{
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
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



// 写一个函数，使得一个数组中的奇数放到前面，偶数放到后面
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//
//	return 0;
//}




// 打印杨辉三角
//int main()
//{
//
//	return 0;
//}



// 指针和数组的笔试题解析
//int main()
//{
//	int a[] = {1,2,3,4};
//
//	printf("%d\n", sizeof(a));			// 16  sizeof(单独放数组名)  计算的是整个数组的大小
//	printf("%d\n", sizeof(a + 0));		// 4/8
//	printf("%d\n", sizeof(*a));			// 4
//	printf("%d\n", sizeof(a + 1));		// 4/8
//	printf("%d\n", sizeof(a[1]));		// 4
//
//
//	printf("%d\n", sizeof(&a));			// 4/8	&a虽然是整个数组的地址，但是也是地址，计算的是一个地址的大小
//	printf("%d\n", sizeof(*&a));		// 16	&a --> int(*p)[4] = &a 解引用后找到的是整个数组 
//	printf("%d\n", sizeof(&a + 1));		// 4/8	
//	printf("%d\n", sizeof(&a[0]));		// 4/8
//	printf("%d\n", sizeof(&a[0] + 1));	// 4/8
//
//	return 0;
//}

//int main()
//{
//
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n",sizeof(arr));			// 6
//	//printf("%d\n",sizeof(arr + 0));		// 4/8
//	//printf("%d\n",sizeof(*arr));		// 1
//	//printf("%d\n", sizeof(arr[1]));		// 1
//	//printf("%d\n",sizeof(&arr));		// 4/8
//	//printf("%d\n",sizeof(&arr + 1));	// 4/8
//	//printf("%d\n",sizeof(&arr[0] + 1));	// 4/8
//
//
//	//printf("%d\n", strlen(arr));			// 随机值
//	//printf("%d\n", strlen(arr + 0));		// 随机值
//	//printf("%d\n", strlen(*arr));			// error
//	//printf("%d\n", strlen(arr[1]));			// error
//	//printf("%d\n", strlen(&arr));			// 随机值
//	//printf("%d\n", strlen(&arr + 1));		// 随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));	// 随机值-1
//
//
//	char arr[] = "abcdef";
//
//	//printf("%d\n", sizeof(arr));			// 7
//	//printf("%d\n", sizeof(arr + 0));		// 4/8
//	//printf("%d\n", sizeof(*arr));			// 1
//	//printf("%d\n", sizeof(arr[1]));			// 1
//	//printf("%d\n", sizeof(&arr));			// 4/8
//	//printf("%d\n", sizeof(&arr + 1));		// 4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));	// 4/8
//
//	//printf("%d\n", strlen(arr));			// 6
//	//printf("%d\n", strlen(arr + 0));		// 6
//	//printf("%d\n", strlen(*arr));			// error
//	//printf("%d\n", strlen(arr[1]));			// error
//	//printf("%d\n", strlen(&arr));			// 6
//	//printf("%d\n", strlen(&arr + 1));		// 随机值
//	//printf("%d\n", strlen(&arr[0] + 1));	// 5
//	
//
//
//	char *p = "abcdef";
//
//	//printf("%d\n", sizeof(p));			// 4/8
//	//printf("%d\n", sizeof(p + 1));		// 4/8
//	//printf("%d\n", sizeof(*p));			// 1
//	//printf("%d\n", sizeof(p[0]));		// 1
//	//printf("%d\n", sizeof(&p));			// 4/8
//	//printf("%d\n", sizeof(&p + 1));		// 4/8
//	//printf("%d\n", sizeof(&p[0] + 1));	// 4/8
//
//	printf("%d\n", strlen(p));				// 6 
//	printf("%d\n", strlen(p + 1));			// 5
//	printf("%d\n", strlen(*p));				// error
//	printf("%d\n", str1en(p[0]));			// error
//	printf("%d\n", strlen(&p));				// 随机值
//	printf("%d\n", str1en(&p + 1));			// 随机值
//	printf("%d\n", strlen(&p[0] + 1));		// 5
//
//	return 0;
//}


//// 二维数组
//int main()
//{
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				// 48
//	printf("%d\n", sizeof(a[0][0]));		// 4
//	printf("%d\n", sizeof(a[0]));			// 16  a[0]可以理解为第一行的数组名
//	printf("%d\n", sizeof(a[0] + 1));		// 4/8 a[0]作为数组名并没有单独放在sizeof中，所以a[0]表示第一行第一个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));	// 4
//	printf("%d\n", sizeof(a + 1));			// 4/8		二维数组的首元素地址就是第一行
//	printf("%d\n", sizeof(*(a + 1)));		// 16		计算的是第二行的大小，等价于 a[1]
//	printf("%d\n", sizeof(&a[0] + 1));		// 4/8	a[0]是第一行的数组名，&a[0]取出的是第一行的地址，加一就是第二行的地址，相当于 a+1
//	printf("%d\n", sizeof(*(&a[0] + 1)));	// 16	相当于 *(a + 1)
//	printf("%d\n", sizeof(*a));				// 16	相当于 *(a+0) <=> a[0]
//	printf("%d\n", sizeof(a[3]));			// 16	不会真正的去访问
//
//	return 0;
//}





////程序的结果是什么?
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));  // 2  5
//
//	return 0;
//}





////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000。如下表达式的值分别为多少?
////已知，结构体Test类型的变量大小是20个字节
//
//int main()
//{
//	printf("%p\n", p + 0x1); // 100014
//	printf("%p\n", (unsigned long)p + 0x1); // 100001
//	printf("%p\n", (unsigned int*)p + 0x1); // 100004
//
//	return 0;
//}





//int main()
//{
//
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//
//	printf("%x ,%x", ptr1[-1], *ptr2);  // 4  2000000
//
//	return 0;
//}





//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);  // 1   注意逗号表达式
//	return 0;
//} 





//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p ,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);  // FFFFFFFC ,-4
//	return 0;
//}




//int main()
//{
//	int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)(*(a + 1));   // *(a + 1) 相当于 a[1] ， a[1]相当于第二行的数组名，数组名是首元素的地址，所以a[1]是第二行首元素的地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));  // 10  5
//	return 0;
//}






//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);  // at
//	return 0;
//}




//int main()
//{
//	char *c[] = { "ENTER" , "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}







/*

题目内容:
实现一个函数，可以左旋字符串中的k个字符。
例如:
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB

*/
//void string_left_move1(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		// 每次左旋一个字符
//		char tmp = *str;
//		// 后面的len-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		// tmp放到最后
//		*(str + len - 1) = tmp;
//	}
//}
//
//// 字符串逆序
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(left);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void string_left_move2(char* str, int k)
//{
//	int len = strlen(str);
//	// 左
//	reverse(str, str + k -1);
//	// 右
//	reverse(str + k, str + len - 1);
//	// 整体
//	reverse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 4;
//	string_left_move2(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}





/*
题目名称:
字事旋转结果
题目内容:
写一个函数，判断个字符串是否为另外一个字符串旋转之后的字符串。
例如:给定s1 =AABCD和s2 = BCDAA,返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/

//int is_string_move(char* str1, char* str2)
//{
//	int i = 0;
//	int len = strlen(str1);
//	for (i = 0; i < len; i++)
//	{
//		// 每次左旋一个字符
//		char tmp = *str1;
//		// 后面的len-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		// tmp放到最后
//		*(str1 + len - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "DAABC";
//
//	int ret = is_string_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//// 第二种解法
//int is_string_move(char* str1, char* str2)
//{
//	// 先判断两个字符串长度是否相等，不相等肯定不是旋转得来的
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	// 在str1后面再追加一个str1
//	// AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	
//	// 判断str2是否是str1的字串
//	char* ret = strstr(str1, str2);
//	
//	return ret != NULL;
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "AABCD";
//
//	int ret = is_string_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}