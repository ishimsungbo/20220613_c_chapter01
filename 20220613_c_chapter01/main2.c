#include <stdio.h>

int main2(void) {

	int a;
	
	//������ ���� a�� 16���� 10�� ����
	a = 0x10;

	printf("  8���� a : %o \n", a);
	printf(" 10���� a : %d \n", a);
	printf(" 16���� a : %x \n", a); // 16�������� 10�� 16�̴�.

	printf("short int: %d����Ʈ\n", sizeof(short int));
	printf("      int: %d����Ʈ\n", sizeof(int));
	printf(" long int: %d����Ʈ\n", sizeof(long int));
	printf(" long long int: %d����Ʈ\n", sizeof(long long int));

	
	//short int b = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2;
	//printf("b�� %d \n", b);



	return 0;
}