#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
内存操作函数
*/


// memcpy()    void * memcpy ( void * destination, const void * source, size_t num );
//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[10] = {0};
//
//	memcpy(arr2, arr1, 5 * sizeof(int));
//
//	return 0;
//}

#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
//// 模拟实现memcpy()函数
//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[10] = {0};
//
//	my_memcpy(arr2, arr1, 5 * sizeof(int));
//
//	return 0;
//}



// 使用模拟实现的my_memcpy()函数拷贝内存重叠的情况， 发现并不能够进行拷贝,而使用库函数memcpy是可以拷贝的
// 一般情况下拷贝内存重叠的情况使用memmove()函数，而vs把memcpy的实现，也可以拷贝内存重叠的情况了
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
//// 模拟实现memcpy()函数
//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	//my_memcpy(arr1 + 2, arr1, 5 * sizeof(int));
//	memmove(arr1 + 2, arr1, 5 * sizeof(int));
//	return 0;
//}



// memmove()函数  void * memmove ( void * destination, const void * source, size_t num );
// 模拟实现memmove()函数
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	//memmove(arr + 2, arr, 5 * sizeof(int));
//	my_memmove(arr, arr + 2, 5 * sizeof(int));
//	return 0;
//}





// 内存比较函数memcmp()  int memcmp ( const void * ptr1, const void * ptr2, size_t num );
//int main()
//{
//	float arr1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
//	float arr2[] = {1.0, 3.0, 4.0};
//
//	int ret = memcmp(arr1, arr2, 7);
//
//	printf("%d\n", ret);
//
//	return 0;
//}





// 内存设置函数memset() void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	int arr[10] = { 0 };
//
//	memset(arr, 1, 20);  // 以字节为单位
//
//	return 0;
//}




