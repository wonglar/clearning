/*
	�ַ�����������
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
// strlen()����

//int main()
//{
//	char arr[] = "abcd";
//	int len = strlen(arr);
//	printf("len = %d\n", len);  // len = 4
//
//	return 0;
//}

// ģ��ʵ��strlen()����(�������汾)
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

// ģ��ʵ��strlen()����(ָ��-ָ��汾)
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

// ע�⣺strlen()�����ķ���ֵ����Ϊsize_t
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
//	// strcpy()�������\0Ҳcopy��ȥ��ͬʱ\0Ҳ��strcpy��ֹcopy��һ������,ע��copy��ʱ��
//	// Ŀ��ռ�������㹻��Ŀռ��ܹ�����ԭ�ַ������ݣ����Ŀ��ռ��ַ���������޸ģ������ǳ����ַ���
//	char* ret = strcpy(arr, "hello"); 
//	printf("%s\n", arr);
//	printf("%s\n", ret);
//
//	return 0;
//}

// ģ��ʵ��strcpy
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




//// strcat �ַ���׷�� char* strcat(char* dest, const char* src)
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* ret = strcat(arr1, arr2);   // Ŀ��ռ�Ҫ���㹻�Ŀռ�
//
//	printf("%s\n", ret);
//	printf("%s\n", arr1);
//
//	return 0;
//}

// strcat()��ģ��ʵ��
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	// ��Ŀ���ַ�����\0
//	while (*dest)
//	{
//		dest++;
//	}
//	// ׷��Դ�ַ�������\0
//	while (*dest++ = *src++);
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* ret = my_strcat(arr1, arr2);   // Ŀ��ռ�Ҫ���㹻�Ŀռ�
//
//	printf("%s\n", ret);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcat �Լ�׷���Լ��Ƿ���У�
//int main()
//{
//	char arr[20] = "abcd";
//	my_strcat(arr, arr);
//	printf("%s\n", arr);  // ���� ����;ԭ���Ǻ���\0�����ǵ��ˣ��������׷�Ӳ���\0�ˣ�
//
//	return 0;
//}




// strcmp() �ַ����ȽϺ��� int strcmp(const char* str1, const char* str2);
//int main()
//{
//	char* p = "abco";
//	char* q = "abcdef";
//	int ret = strcmp(p, q);
//	printf("ret = %d\n", ret);
//	if (ret > 0) 
//	{
//		printf(">\n"); // �⺯���е�strcmp���ڷ��� 1����Ƶ�����ֻҪ����0���ɣ�
//	}
//	else if (ret < 0) 
//	{
//		printf("<\n");// �⺯���е�strcmpС�ڷ��� -1����Ƶ�����ֻҪС��0���ɣ�
//	}
//	else
//	{
//		printf("=\n");// �⺯���е�strcmp���ڷ��� 0
//	}
//
//	return 0;
//}

// strcmo������ģ��ʵ��
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
 ���Ϻ������ǳ��Ȳ������Ƶ��ַ�������
*/





/*
strncpy strncat strncmp
���Ϻ������ǳ��������Ƶ��ַ�������
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
//	// ��arr1�в����Ƿ����arr2
//	char* ret = strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���\n");
//		printf("%s\n", ret);
//	}
//	return 0;
//}



// ģ��ʵ��strstr()
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
//	// ��arr1�в����Ƿ����arr2
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���\n");
//		printf("%s\n", ret);
//	}
//	return 0;
//}





// strtok() ���һ���ַ���   char * strtok ( char * str, const char * delimiters );
//int main()
//{
//	char arr[] = "wonglar@163.com �Ǻ�";
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






// ʹ�ÿ⺯����ʱ�򣬵��ú���ʧ�ܣ��������ô�����
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