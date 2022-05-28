#define _CRT_SECURE_NO_WARNINGS 1
/*
	自定义类型
*/

#include <stdio.h>
// 匿名结构体类型
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;  // 直接创建了一个结构体变量s


// 匿名结构体类型
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//} *ps;  // 匿名结构体指针


// 观察下面代码是否可行？
// 不行！
//struct N
//{
//	int d;
//	struct N n;
//};

// 结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next; // 找到自己同类型的下一个元素
//};





/*
	结构体内存对齐
*/

// 修改默认对齐数
//#pragma pack(1)  // 把默认对齐数改为1，相当于不对齐
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()  // 把改的对齐数取消掉
//int main()
//{
//	printf("%d\n", sizeof(struct S));  // 6
//	return 0;
//}





// offsetof(type,member)
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));  // 0
//	printf("%d\n", offsetof(struct S, i));   // 4
//	printf("%d\n", offsetof(struct S, c2));	 //	8
//
//	return 0;
//}



// 写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明。  考察offsetof的实现
// 后面讲
//int main()
//{
//	return 0;
//}





// 结构体实现位段
// 位段的成员必须是int、unsigned int 或 signed int 还有 char
// 位段的成员名后边有一个冒号和一个数字
//struct A
//{
//	// 先开辟4个字节；32bit
//	int _a : 2;		// _a成员占2个比特位
//	int _b : 5;		// _a成员占5个比特位
//	int _c : 10;		// _a成员占10个比特位
//	// 到这还剩15bit，再开辟4个字节（32bit） 那么问题来了，下面这30bit是如何使用的呢？在vs中会浪费掉那15bit，直接使用新开辟的32bit中的30bit(1个字节内部的数是从右向左使用的)
//	int _d : 30;		// _a成员占30个比特位
//};
//// 注意：位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
//int main()
//{
//	printf("%d\n", sizeof(struct A));  // 8
//
//	return 0;
//}





/*
	枚举
*/
// 生命枚举类型
//enum Color
//{
//	RED = 5,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = BLUE;
//	// RED = 10;  // ERROR
//	printf("%d\n", c);
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	printf("枚举类型的大小：%d\n", sizeof(enum Color));  // 4
//	printf("枚举类型的大小：%d\n", sizeof(c));			// 4
//	
//
//	return 0;
//}











