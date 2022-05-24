#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 判断机器是小端存储还是大端存储
//int main()
//{
//	int a = 1;
//
//	char* p = (char*)&a;
//
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);   // 以浮点数的视角去取数（浮点数与整数在内存中的存取方式不同）
//
//	*pFloat = 9.0;  // 以浮点数的方式存入内存
//	printf("n的值为：%d\n", n);// 以整数的方式读取内存
//	printf("*pFloat的值为：%f\n", *pFloat);  // 以浮点数的方式读取内存
//	 
//	return 0;
//}
/*
	运行结果：
	n的值为：9
	*pFloat的值为：0.000000
	n的值为：1091567616
	*pFloat的值为：9.000000

*/


// 00000000 00000000 11111111 11111111
// 11111111 11111111