#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int i;
//int main()
//{
//	i--;
//
//	if (i > sizeof(i))   // sizeof()������ص���unsigned int
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



// ��ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//1.����iΪ��λ�� n
//		int n = 1;
//		int tmp = i;
//		while (tmp = tmp / 10)
//		{
//			n++;
//		}
//	
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	printf("\n ");
//	return 0;
//}




// �ַ�������
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



// дһ��������ʹ��һ�������е������ŵ�ǰ�棬ż���ŵ�����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//
//	return 0;
//}




// ��ӡ�������
//int main()
//{
//
//	return 0;
//}



// ָ�������ı��������
//int main()
//{
//	int a[] = {1,2,3,4};
//
//	printf("%d\n", sizeof(a));			// 16  sizeof(������������)  ���������������Ĵ�С
//	printf("%d\n", sizeof(a + 0));		// 4/8
//	printf("%d\n", sizeof(*a));			// 4
//	printf("%d\n", sizeof(a + 1));		// 4/8
//	printf("%d\n", sizeof(a[1]));		// 4
//
//
//	printf("%d\n", sizeof(&a));			// 4/8	&a��Ȼ����������ĵ�ַ������Ҳ�ǵ�ַ���������һ����ַ�Ĵ�С
//	printf("%d\n", sizeof(*&a));		// 16	&a --> int(*p)[4] = &a �����ú��ҵ������������� 
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
//	//printf("%d\n", strlen(arr));			// ���ֵ
//	//printf("%d\n", strlen(arr + 0));		// ���ֵ
//	//printf("%d\n", strlen(*arr));			// error
//	//printf("%d\n", strlen(arr[1]));			// error
//	//printf("%d\n", strlen(&arr));			// ���ֵ
//	//printf("%d\n", strlen(&arr + 1));		// ���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));	// ���ֵ-1
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
//	//printf("%d\n", strlen(&arr + 1));		// ���ֵ
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
//	printf("%d\n", strlen(&p));				// ���ֵ
//	printf("%d\n", str1en(&p + 1));			// ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));		// 5
//
//	return 0;
//}


//// ��ά����
//int main()
//{
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));				// 48
//	printf("%d\n", sizeof(a[0][0]));		// 4
//	printf("%d\n", sizeof(a[0]));			// 16  a[0]�������Ϊ��һ�е�������
//	printf("%d\n", sizeof(a[0] + 1));		// 4/8 a[0]��Ϊ��������û�е�������sizeof�У�����a[0]��ʾ��һ�е�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));	// 4
//	printf("%d\n", sizeof(a + 1));			// 4/8		��ά�������Ԫ�ص�ַ���ǵ�һ��
//	printf("%d\n", sizeof(*(a + 1)));		// 16		������ǵڶ��еĴ�С���ȼ��� a[1]
//	printf("%d\n", sizeof(&a[0] + 1));		// 4/8	a[0]�ǵ�һ�е���������&a[0]ȡ�����ǵ�һ�еĵ�ַ����һ���ǵڶ��еĵ�ַ���൱�� a+1
//	printf("%d\n", sizeof(*(&a[0] + 1)));	// 16	�൱�� *(a + 1)
//	printf("%d\n", sizeof(*a));				// 16	�൱�� *(a+0) <=> a[0]
//	printf("%d\n", sizeof(a[3]));			// 16	����������ȥ����
//
//	return 0;
//}





////����Ľ����ʲô?
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));  // 2  5
//
//	return 0;
//}





////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ����?
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
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
//	printf("%d", p[0]);  // 1   ע�ⶺ�ű��ʽ
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
//	int *ptr2 = (int *)(*(a + 1));   // *(a + 1) �൱�� a[1] �� a[1]�൱�ڵڶ��е�������������������Ԫ�صĵ�ַ������a[1]�ǵڶ�����Ԫ�صĵ�ַ
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

��Ŀ����:
ʵ��һ�����������������ַ����е�k���ַ���
����:
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB

*/
//void string_left_move1(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		// ÿ������һ���ַ�
//		char tmp = *str;
//		// �����len-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		// tmp�ŵ����
//		*(str + len - 1) = tmp;
//	}
//}
//
//// �ַ�������
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
//	// ��
//	reverse(str, str + k -1);
//	// ��
//	reverse(str + k, str + len - 1);
//	// ����
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
��Ŀ����:
������ת���
��Ŀ����:
дһ���������жϸ��ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
����:����s1 =AABCD��s2 = BCDAA,����1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
*/

//int is_string_move(char* str1, char* str2)
//{
//	int i = 0;
//	int len = strlen(str1);
//	for (i = 0; i < len; i++)
//	{
//		// ÿ������һ���ַ�
//		char tmp = *str1;
//		// �����len-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		// tmp�ŵ����
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



//// �ڶ��ֽⷨ
//int is_string_move(char* str1, char* str2)
//{
//	// ���ж������ַ��������Ƿ���ȣ�����ȿ϶�������ת������
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	// ��str1������׷��һ��str1
//	// AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	
//	// �ж�str2�Ƿ���str1���ִ�
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