#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//
//	char* ps = "hello world";
//
//	printf("%c\n", *ps);
//
//	return 0;
//}




//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	int (*pa) [10] = &arr;
//
//	// *paָ�����������飬Ҳ���൱��arr�������൱��������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//
//	return 0;
//}



//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// һ��ָ��Ĵ���
//	print(p, sz);
//
//	return 0;
//}


//void test(int** ptr)
//{
//	**ptr = 20;
//}
//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;  // һ��ָ��
//	int** ppa = &pa;	// ����ָ��
//
//	test(ppa);	// �Ѷ���ָ����д���
//
//	test(&pa); // ��һ��ָ������ĵ�ַ
//	int* arr[10] = {0};
//	test(arr); // �����һ��ָ���������
//
//
//	printf("%d\n", a);
//
//	return 0;
//}




//int main()
//{
//	(*(void(*) ()) 0)();
//
//	/*
//		����0��ַ���ĺ������ú����޲Σ�����ֵ������void
//		void(*) ()	����ָ������
//		(void(*) ()) 0	��0����ǿ������ת����������Ϊһ��������ַ
//		*(void(*) ()) 0	��0��ַ���н����ò���
//		(*(void(*) ()) 0)()	����0��ַ���ĺ���
//	
//	*/
//
//
//	
//	return 0;
//}


//void(*signal(int, void(*) (int))) (int);
//// typedef - �����ͽ����ض���
//typedef void(*pfun_t) (int);  // ��void(*)(int)�ĺ���ָ������������Ϊpfun_t, �൱�� typedef unsigned int u_intһ��
//
//pfun_t signal(int, pfun_t)  // �����Ϳ�����
// 
//// void(*)(int) signal(int, void(*)(int))
//
///*
//��δ�����ʵ��һ������������
//signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
//signal�����ĵ�һ������������int���ڶ��������������Ǻ���ָ�룬�ú�����ָ��һ������Ϊint������������void�ĺ���
//signal�����ķ���ֵ����Ҳ��һ������ָ�룬�ú�����ָ��һ������Ϊint������������void�ĺ���
//����signal��һ������������
//*/


//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	int(*pf1)(int, int) = add;
//	int(*pf2)(int, int) = sub;
//
//	int(*pfArr[2])(int, int) = {add, sub}; // pfArr���Ǻ���ָ������
//
//	return 0;
//}





//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****   1. add  2. sub   ****\n");
//	printf("****   3. mul  4. div   ****\n");
//	printf("****       0. exit      ****\n");
//	printf("****************************\n");
//}
//
//int main()
//{
//	// ������ - �������ͱ����ļӣ������ˣ���
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������������������>\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("������������������>\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("������������������>\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("������������������>\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}




//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****   1. add  2. sub   ****\n");
//	printf("****   3. mul  4. div   ****\n");
//	printf("****       0. exit      ****\n");
//	printf("****************************\n");
//}
//
//int main()
//{
//	// ������ - �������ͱ����ļӣ������ˣ���
//	int input = 0;
//	do
//	{
//		menu();
//		int(*pfArr[5])(int, int) = { NULL, add, sub, mul, div }; // ����ָ������
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{ 
//			printf("������������������>\n");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ���������ѡ��\n");
//		}
//
//	} while (input);
//
//	return 0;
//}




//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("****   1. add  2. sub   ****\n");
//	printf("****   3. mul  4. div   ****\n");
//	printf("****       0. exit      ****\n");
//	printf("****************************\n");
//}
//
//int calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0; 
//	printf("������2����������>");
//	scanf("%d %d", &x, &y);
//
//	return p(x, y);
//}
//
//int main()
//{
//	// ������ - �������ͱ����ļӣ������ˣ���
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			ret = calc(add);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = calc(sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = calc(mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = calc(div);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}





//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//// �����������������
//void test1()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 0, 1, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// ����
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	// ��ӡ
//	print(arr, sz);
//}
//
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//// ʹ��qsort����������ṹ������
//void test2()
//{
//	struct stu s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// ��������������
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//
//	// ��������������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//
//}
//
//
//int main()
//{
//
//	test1(); 
//	//test2();
//
//	return 0;
//}



//struct stu
//{
//	char name[20];
//	int age;
//};
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//// ģ��qsort����ʵ��һ��ð�������ͨ���㷨
//void bubble_sort(void* base,
//	int sz,
//	int width,
//	int(*cmp)(const void*, const void*))
//{
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			 // ����Ԫ�رȽ�
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				// ����
//				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//// ʹ��qsort����������ṹ������
//void test2()
//{
//	struct stu s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// ��������������
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//
//	// ��������������
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//
//}
//
//
//int main()
//{
//	
//	test2();
//
//	return 0;
//}



