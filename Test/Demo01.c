#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//	return 0;
//}



// ģ��ʵ��strcpy
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "welcome beijing";
//	char arr2[] = "hello";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	const int* const pa = &a;
//
//	pa = &b;
//
//	return 0;
//}


// ��һ��������������1�ĸ���  ����1������ȱ�ݣ���֧�ָ�����
//int number_of_1(int n)
//{
//	
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//
//}

// ��һ��������������1�ĸ���  ����2
//int number_of_1(int n)
//{
//
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++; 
//		}
//	}
//
//	return count;
//}

// ��һ��������������1�ĸ���  ����3
//int number_of_1(int n)
//{
//
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int n = -1;
//
//	int ret = number_of_1(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


// дһ�������ж�һ�������ǲ���2��n�η�
// �۲췢��2��n�η������֣���������ֻ��һ��1

//int of_2(int k)
//{
//	if (k & (k - 1))
//	{
//		return 0;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int k = 10;
//	
//	int ret = of_2(k);
//
//	if (ret == 1)
//	{
//		printf("�ǣ�\n");
//	}
//	else
//	{
//		printf("���ǣ�\n");
//	}
//
//	return 0;
//}


// ��������в�ͬλ�ĸ���  ����1

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d %d", &m, &n);
//
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	printf("count = %d\n", count);
//	
//	return 0;
//}



// ��һ��������������1�ĸ���  ����3
//int number_of_1(int n)
//{
//
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//// ��������в�ͬλ�ĸ���  ����2�����������ͬΪ0������Ϊ1.Ȼ��ͳ���м���1��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//
//	int ret = m ^ n;
//
//	count = number_of_1(ret);
//
//
//	printf("count = %d\n", count);
//
//	return 0;
//}



// ��ӡ���������Ƶ�����λ��ż��λ

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	// 00000000000000000000000000001010
//
//	// ���е�ż��λ
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	// ���е�����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}




// ����������������������ʱ����
//int main()
//{
//	int m = 3;
//	int n = 5;
//
//	m = m ^ n;
//	n = m ^ n;
//	m = m ^ n;
//
//	printf("m = %d, n = %d\n", m, n);
//
//	return 0;
//}




