#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
	��̬�ڴ����
*/
#include <stdlib.h>
// malloc ���ٿռ�   void* malloc (size_t size);
//int main()
//{
//	// ��̬����10�����Ϳռ�
//	int * p = (int*)malloc(10 * sizeof(int));   // ��Щ��������ǿ������ת�����ᷢ�����棡
//
//	// �������ʧ��
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//
//	//���ٳɹ�����ʼʹ��
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
//	// ʹ����ϣ��ͷſռ�
//	free(p);
//
//	// �ռ������ͷţ�����p������ָ���Ǹ��ռ䣬����������Ҫ��p��ΪNULL
//	p = NULL;
//
//	return 0;
//}

/*
free���������ͷŶ�̬���ٵ��ڴ档
���������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
���������ptr��NULLָ��,����ʲô�¶�������
*/





// calloc���ٿռ�   void* calloc (size_t num, size_t size);
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
//		// malloc����ʼ����Ĭ�������ֵ
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
//		// calloc���ٿռ����ڴ��ʼ��Ϊ0
//		printf("%d ", *(p + i));   // 0 0 0 0 0 0 0 0 0 0 
//	}
//	free(p);
//	p = NULL;
//}


// realloc()  ���ٿռ�  void* realloc (void* ptr, size_t size);   ptr �� Pointer to a memory block previously allocated with malloc, calloc or realloc.
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
//	// ��Ҫpָ��Ŀռ������Ҫ20��int�ռ�
//	// realloc�����ռ�
//	int* ptr = (int*)realloc(p, 20 * sizeof(int)); // realloc���ݿռ䣬�п��ܷ��ؾɵĵ�ַ���п��ܷ����µĵ�ַ��Ҳ�п��ܷ���NULL��û���㹻�Ŀռ䣬����ʧ�ܣ���
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
	int* p = realloc(NULL,10 * sizeof(int)) ���﹦��������malloc
*/




/*
	��̬�ڴ濪�ٵĳ�������
*/

// ��NULLָ��Ľ����ò���
// �Զ�̬���ٿռ��Խ�����
// ʹ��free�ͷŷǶ�̬���ٵĿռ�
// ʹ��free�ͷŶ�̬�ڴ��е�һ����
// ��ͬһ�鶯̬���ٿռ䣬����ͷ�
// ��̬�����ڴ������ͷ�






// ��̬�ڴ濪�ٵ�ϰ��

// ���´�����ʲô���⣿
// ����ջ�ռ��ַ������
// GetMemory�����е���������ջ�ڴ��п��ٵģ����˺���ϵͳ�ͻ�����
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


/*
��ӡ
*      *
 *    *
  *  *
   **
   **
  *  *
 *    *
*      *	
*/
//int main()
//{
//	int n = 0;
//
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

