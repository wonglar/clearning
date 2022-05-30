#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
	动态内存分配
*/
#include <stdlib.h>
// malloc 开辟空间   void* malloc (size_t size);
//int main()
//{
//	// 动态开辟10个整型空间
//	int * p = (int*)malloc(10 * sizeof(int));   // 有些编译器不强制类型转化，会发出警告！
//
//	// 如果开辟失败
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//
//	//开辟成功，开始使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	// 使用完毕，释放空间
//	free(p);
//
//	// 空间虽已释放，但是p还是在指向那个空间，所以我们需要将p置为NULL
//	p = NULL;
//
//	return 0;
//}

/*
free函数用来释放动态开辟的内存。
●如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。
●如果参数ptr是NULL指针,则函数什么事都不做。
*/





// calloc开辟空间   void* calloc (size_t num, size_t size);
//int main()
//{
//	int * p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		// malloc不初始化，默认是随机值
//		printf("%d ", *(p +  i));   // -842150451 -842150451 -842150451 -842150451 -842150451 -842150451 -842150451 -842150451 -842150451 -842150451
//	}
//	free(p);
//	p = NULL;
//}

//int main()
//{
//	int * p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		// calloc开辟空间会对内存初始化为0
//		printf("%d ", *(p + i));   // 0 0 0 0 0 0 0 0 0 0 
//	}
//	free(p);
//	p = NULL;
//}


// realloc()  开辟空间  void* realloc (void* ptr, size_t size);   ptr 是 Pointer to a memory block previously allocated with malloc, calloc or realloc.
//int main()
//{
//	int * p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//
//	// 需要p指向的空间更大，需要20个int空间
//	// realloc调整空间
//	int* ptr = (int*)realloc(p, 20 * sizeof(int)); // realloc增容空间，有可能返回旧的地址，有可能返回新的地址，也有可能返回NULL（没有足够的空间，增容失败！）
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

/*
	int* p = realloc(NULL,10 * sizeof(int)) 这里功能类似于malloc
*/




/*
	动态内存开辟的常见错误
*/

// 对NULL指针的解引用操作
// 对动态开辟空间的越界访问
// 使用free释放非动态开辟的空间
// 使用free释放动态内存中的一部分
// 对同一块动态开辟空间，多次释放
// 动态开辟内存忘记释放