#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �жϻ�����С�˴洢���Ǵ�˴洢
//int main()
//{
//	int a = 1;
//
//	char* p = (char*)&a;
//
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}




//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//
//	return 0;
//}




//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);   // �Ը��������ӽ�ȥȡ�������������������ڴ��еĴ�ȡ��ʽ��ͬ��
//
//	*pFloat = 9.0;  // �Ը������ķ�ʽ�����ڴ�
//	printf("n��ֵΪ��%d\n", n);// �������ķ�ʽ��ȡ�ڴ�
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);  // �Ը������ķ�ʽ��ȡ�ڴ�
//	 
//	return 0;
//}
/*
	���н����
	n��ֵΪ��9
	*pFloat��ֵΪ��0.000000
	n��ֵΪ��1091567616
	*pFloat��ֵΪ��9.000000

*/


// 00000000 00000000 11111111 11111111
// 11111111 11111111