#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	�ļ�����
*/

//int main()
//{
//	// ��д�ķ�ʽ���ļ����ļ������ڣ�����д������ļ����ڲ��������ݻ���յ����ݡ� "r" ����ֻ����ʽ�� "a"��׷��
//	// Ĭ�����ڵ�ǰ·��
//	FILE* pf = fopen("test.txt", "r");  
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�
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
//	FILE* pf = fopen("test.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
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
//	// ���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	// ���ļ�
//	int ret = fgetc(stdin);   // �ӱ�׼��������ȡ��Ϣ
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
//	// д�ļ�
//	fputs("hello\n", pf);
//	fputs("world", pf);
//
//	// �ر��ļ�
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
//	// ���ļ�
//	fgets(arr, 4, pf);
//	printf("%s\n",arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//// д���ʽ��������
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
//	// д�ļ�
//	struct S s = {"abcdef", 20, 5.5f};
//
//	fprintf(pf,"%s %d %lf", s.arr, s.num, s.score);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}



// д���ʽ��������
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
//	// ���ļ�
//	struct S s = { 0 };
//
//	fscanf(pf,"%s %d %f",s.arr, &(s.num), &(s.score));
//
//	fprintf(stdout, "%s %d %lf", s.arr, s.num, s.score);
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}




//// ������д��
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
//	// д�ļ�
//	struct S s = {"abcdef", 20, 5.5f};
//	fwrite(&s, sizeof(struct S), 1, pf);
//	
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}



// �����ƶ�ȡ
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
//	// ��ȡ�ļ�
//	struct S s = { 0 };
//	fread(&s, sizeof(struct S), 1, pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}