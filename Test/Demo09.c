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
//	// дһ����ʽ�������ݵ��ַ�����
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	printf("------------------------------\n");
//
//	// ��һ���ַ����ж���ʽ��������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//}




/*

	�ļ��������д

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
//	// ��ʼ��ȡ
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// �����ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);		// ��ǰλ��
//	//fseek(pf, -2, SEEK_END);	// �ļ�ĩβ
//	//fseek(pf, 2, SEEK_SET);  // ��ʼλ��
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);  // �������ʼλ�õ�ƫ����
//	printf("ret = %d\n", ret);
//
//
//	// ���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	// �ر��ļ�
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
//	// д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




// д���� ��test.txt ����һ�� ���� test2.txt

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

	// �ļ��򿪳ɹ�
	// ��д�ļ�
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		// д�ļ�
		fputc(ch, pfwrite);
	}

	// �ر��ļ�
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}





