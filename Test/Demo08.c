#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	文件操作
*/

//int main()
//{
//	// 以写的方式打开文件，文件不存在，会进行创建，文件存在并且有内容会清空掉内容。 "r" 是以只读方式打开 "a"是追加
//	// 默认是在当前路径
//	FILE* pf = fopen("test.txt", "r");  
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//
//	return 0;
//}



//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	// 读文件
//	int ret = fgetc(stdin);   // 从标准输入流读取信息
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	return 0;
//}



//int main()
//{
//	FILE * pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	fputs("hello\n", pf);
//	fputs("world", pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//int main()
//{
//	FILE * pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20] = {0};
//	// 读文件
//	fgets(arr, 4, pf);
//	printf("%s\n",arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//// 写入格式化的数据
//struct S
//{
//	char arr[10];
//	int num;
//	float score;
//};
//
//int main()
//{
//	FILE * pf = fopen("test.txt", "w");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	struct S s = {"abcdef", 20, 5.5f};
//
//	fprintf(pf,"%s %d %lf", s.arr, s.num, s.score);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}



// 写入格式化的数据
//struct S
//{
//	char arr[10];
//	int num;
//	float score;
//};
//
//int main()
//{
//	FILE * pf = fopen("test.txt", "r");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件
//	struct S s = { 0 };
//
//	fscanf(pf,"%s %d %f",s.arr, &(s.num), &(s.score));
//
//	fprintf(stdout, "%s %d %lf", s.arr, s.num, s.score);
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}




//// 二进制写入
//struct S
//{
//	char arr[10];
//	int num;
//	float score;
//};
//
//int main()
//{
//	FILE * pf = fopen("test.txt", "w");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	struct S s = {"abcdef", 20, 5.5f};
//	fwrite(&s, sizeof(struct S), 1, pf);
//	
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}



// 二进制读取
//struct S
//{
//	char arr[10];
//	int num;
//	float score;
//};
//
//int main()
//{
//	FILE * pf = fopen("test.txt", "r");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读取文件
//	struct S s = { 0 };
//	fread(&s, sizeof(struct S), 1, pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}