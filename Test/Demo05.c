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
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return ret;
}

// 模拟实现memcpy()函数
int main()
{
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = {0};

	my_memcpy(arr2, arr1, 5 * sizeof(int));

	return 0;
}