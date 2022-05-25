/*
	字符串操作函数
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
// strlen()函数

//int main()
//{
//	char arr[] = "abcd";
//	int len = strlen(arr);
//	printf("len = %d\n", len);  // len = 4
//
//	return 0;
//}

// 模拟实现strlen()函数(计数器版本)
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);  // len = 4
//
//	return 0;
//}

// 模拟实现strlen()函数(指针-指针版本)
//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* end = str;
//	while (*end++) ;
//
//	return end - str - 1;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);  // len = 4
//
//	return 0;
//}

// 注意：strlen()函数的返回值类型为size_t
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}




// strcpy  char* strcpy(char* dest, const char* src)
//int main()
//{
//	char arr[20] = "##########";
//	// strcpy()函数会把\0也copy进去，同时\0也是strcpy终止copy的一个条件,注意copy的时候
//	// 目标空间必须有足够大的空间能够放下原字符串内容，其次目标空间字符串必须可修改，不能是常量字符串
//	char* ret = strcpy(arr, "hello"); 
//	printf("%s\n", arr);
//	printf("%s\n", ret);
//
//	return 0;
//}

// 模拟实现strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++) ;
//
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "hello";
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}




//// strcat 字符串追加 char* strcat(char* dest, const char* src)
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* ret = strcat(arr1, arr2);   // 目标空间要有足够的空间
//
//	printf("%s\n", ret);
//	printf("%s\n", arr1);
//
//	return 0;
//}

// strcat()的模拟实现
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	// 找目标字符串的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	// 追加源字符串包括\0
//	while (*dest++ = *src++);
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* ret = my_strcat(arr1, arr2);   // 目标空间要有足够的空间
//
//	printf("%s\n", ret);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcat 自己追加自己是否可行？
//int main()
//{
//	char arr[20] = "abcd";
//	my_strcat(arr, arr);
//	printf("%s\n", arr);  // 答案是 不行;原因是后面\0被覆盖掉了，最后后面就追加不上\0了！
//
//	return 0;
//}




// strcmp() 字符串比较函数 int strcmp(const char* str1, const char* str2);
//int main()
//{
//	char* p = "abco";
//	char* q = "abcdef";
//	int ret = strcmp(p, q);
//	printf("ret = %d\n", ret);
//	if (ret > 0) 
//	{
//		printf(">\n"); // 库函数中的strcmp大于返回 1（设计的理念只要大于0即可）
//	}
//	else if (ret < 0) 
//	{
//		printf("<\n");// 库函数中的strcmp小于返回 -1（设计的理念只要小于0即可）
//	}
//	else
//	{
//		printf("=\n");// 库函数中的strcmp等于返回 0
//	}
//
//	return 0;
//}

// strcmo函数的模拟实现
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
//
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abbb";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n"); 
//	}
//	else if (ret < 0) 
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//
//	return 0;
//}
/*
 strcpy strcat strcmp
 以上函数都是长度不受限制的字符串函数
*/





/*
strncpy strncat strncmp
以上函数都是长度受限制的字符串函数
*/

// strncpy()  char* strncpy(char* dest, const char* src, size_t num)
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//
//	printf("%s\n", arr1);  // qwcdef
//
//	return 0;
//}





// strncat()  char* strncat(char* dest, const char* src, size_t num)
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);  // hello wor
//	return 0;
//}





// strncmp()  int strncmp ( const char * str1, const char * str2, size_t num )
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	int ret = strncmp(p, q, 3);
//
//	printf("ret = %d\n", ret);
//	return 0;
//}





// strstr()  const char * strstr ( const char * str1, const char * str2 );
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcdq";
//
//	// 在arr1中查找是否包含arr2
//	char* ret = strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//		printf("%s\n", ret);
//	}
//	return 0;
//}



// 模拟实现strstr()
//my_strstr()
//{
//
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	// 在arr1中查找是否包含arr2
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//		printf("%s\n", ret);
//	}
//	return 0;
//}





// strtok() 拆分一个字符串   char * strtok ( char * str, const char * delimiters );
//int main()
//{
//	char arr[] = "wonglar@163.com 呵呵";
//	char *p = " @.";
//	char tmp[30] = {0};
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}






// 使用库函数的时候，调用函数失败，都会设置错误码
// int errno;
// strerror()	char * strerror ( int errnum );
#include <errno.h>
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	/*
//	No error
//	Operation not permitted
//	No such file or directory
//	No such process
//	Interrupted function call
//	Input / output error
//	*/
//
//
//	FILE * pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	printf("Hello World\n");
//	return 0 ;
//}