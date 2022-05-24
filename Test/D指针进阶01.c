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
//	// *pa指的是整个数组，也就相当于arr，即就相当于数组首元素的地址
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
//	// 一级指针的传参
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
//	int* pa = &a;  // 一级指针
//	int** ppa = &pa;	// 二级指针
//
//	test(ppa);	// 把二级指针进行传参
//
//	test(&pa); // 传一级指针变量的地址
//	int* arr[10] = {0};
//	test(arr); // 传存放一级指针的数组名
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
//		调用0地址处的函数，该函数无参，返回值类型是void
//		void(*) ()	函数指针类型
//		(void(*) ()) 0	对0进行强制类型转换，被解释为一个函数地址
//		*(void(*) ()) 0	对0地址进行解引用操作
//		(*(void(*) ()) 0)()	调用0地址处的函数
//	
//	*/
//
//
//	
//	return 0;
//}


//void(*signal(int, void(*) (int))) (int);
//// typedef - 对类型进行重定义
//typedef void(*pfun_t) (int);  // 对void(*)(int)的函数指针类型重命名为pfun_t, 相当于 typedef unsigned int u_int一样
//
//pfun_t signal(int, pfun_t)  // 这样就可以了
// 
//// void(*)(int) signal(int, void(*)(int))
//
///*
//这段代码其实是一个函数的声明
//signal和()先结合，说明signal是函数名
//signal函数的第一个参数类型是int，第二个参数的类型是函数指针，该函数，指向一个参数为int，返回类型是void的函数
//signal函数的返回值类型也是一个函数指针，该函数，指向一个参数为int，返回类型是void的函数
//所以signal是一个函数的声明
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
//	int(*pfArr[2])(int, int) = {add, sub}; // pfArr就是函数指针数组
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
//	// 计算器 - 计算整型变量的加，减，乘，除
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：>\n");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：>\n");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：>\n");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：>\n");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
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
//	// 计算器 - 计算整型变量的加，减，乘，除
//	int input = 0;
//	do
//	{
//		menu();
//		int(*pfArr[5])(int, int) = { NULL, add, sub, mul, div }; // 函数指针数组
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{ 
//			printf("请输入两个操作数：>\n");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序！\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，重新选择！\n");
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
//	printf("请输入2个操作数：>");
//	scanf("%d %d", &x, &y);
//
//	return p(x, y);
//}
//
//int main()
//{
//	// 计算器 - 计算整型变量的加，减，乘，除
//	int input = 0;
//	do
//	{
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择：>");
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
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
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
//// 测试整型数组的排序
//void test1()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 0, 1, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	// 打印
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
//// 使用qsort函数，排序结构体数据
//void test2()
//{
//	struct stu s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// 按照年龄来排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//
//	// 按照名字来排序
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
//// 模仿qsort函数实现一个冒泡排序的通用算法
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
//			 // 两个元素比较
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				// 交换
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
//// 使用qsort函数，排序结构体数据
//void test2()
//{
//	struct stu s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// 按照年龄来排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//
//	// 按照名字来排序
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



