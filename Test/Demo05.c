#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
内存操作函数
*/
int main()
{
	// 定义一个字符串
	char arr[] = "hello world";
	int len = strlen(arr);
	printf("len = %d\n", len);
	printf("arr[3] = %c", arr[3]);

	return 0;
}
