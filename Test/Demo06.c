#define _CRT_SECURE_NO_WARNINGS 1
/*
	�Զ�������
*/

#include <stdio.h>
// �����ṹ������
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;  // ֱ�Ӵ�����һ���ṹ�����s


// �����ṹ������
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//} *ps;  // �����ṹ��ָ��


// �۲���������Ƿ���У�
// ���У�
//struct N
//{
//	int d;
//	struct N n;
//};

// �ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next; // �ҵ��Լ�ͬ���͵���һ��Ԫ��
//};





/*
	�ṹ���ڴ����
*/

// �޸�Ĭ�϶�����
//#pragma pack(1)  // ��Ĭ�϶�������Ϊ1���൱�ڲ�����
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()  // �ѸĵĶ�����ȡ����
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



// дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵����  ����offsetof��ʵ��
// ���潲
//int main()
//{
//	return 0;
//}





// �ṹ��ʵ��λ��
// λ�εĳ�Ա������int��unsigned int �� signed int ���� char
// λ�εĳ�Ա�������һ��ð�ź�һ������
//struct A
//{
//	// �ȿ���4���ֽڣ�32bit
//	int _a : 2;		// _a��Առ2������λ
//	int _b : 5;		// _a��Առ5������λ
//	int _c : 10;		// _a��Առ10������λ
//	// ���⻹ʣ15bit���ٿ���4���ֽڣ�32bit�� ��ô�������ˣ�������30bit�����ʹ�õ��أ���vs�л��˷ѵ���15bit��ֱ��ʹ���¿��ٵ�32bit�е�30bit(1���ֽ��ڲ������Ǵ�������ʹ�õ�)
//	int _d : 30;		// _a��Առ30������λ
//};
//// ע�⣺λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��
//int main()
//{
//	printf("%d\n", sizeof(struct A));  // 8
//
//	return 0;
//}





/*
	ö��
*/
// ����ö������
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
//	printf("ö�����͵Ĵ�С��%d\n", sizeof(enum Color));  // 4
//	printf("ö�����͵Ĵ�С��%d\n", sizeof(c));			// 4
//	
//
//	return 0;
//}











