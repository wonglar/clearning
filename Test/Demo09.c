#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = {"hello", 24, 5.5};
//	char buf[100] = {0};
//	struct S tmp = {0};
//	// 写一个格式化的数据到字符串中
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	printf("------------------------------\n");
//
//	// 从一个字符串中读格式化的数据
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//}




/*

	文件的随机读写

*/


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 开始读取
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// 调整文件指针
//	fseek(pf, 2, SEEK_CUR);		// 当前位置
//	//fseek(pf, -2, SEEK_END);	// 文件末尾
//	//fseek(pf, 2, SEEK_SET);  // 起始位置
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);  // 相对于起始位置的偏移量
//	printf("ret = %d\n", ret);
//
//
//	// 让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
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
//	int a = 10000;
//
//	FILE* pf = fopen("test.txt", "wb");
//
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




// 写代码 把test.txt 拷贝一份 叫做 test2.txt

int main()
{
	FILE* pfread = fopen("test.txt", "r");
	if (NULL == pfread)
	{
		perror("fopen pfread");
		return 1;
	}

	FILE* pfwrite = fopen("test2.txt", "w");
	if (NULL == pfwrite)
	{
		fclose(pfread);
		pfread = NULL;
		perror("fopen pfwrite");
		return 1;
	}

	// 文件打开成功
	// 读写文件
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		// 写文件
		fputc(ch, pfwrite);
	}

	// 关闭文件
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}





