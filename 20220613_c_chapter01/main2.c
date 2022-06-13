#include <stdio.h>

int main2(void) {

	int a;
	
	//정수형 변수 a에 16진수 10을 저장
	a = 0x10;

	printf("  8진수 a : %o \n", a);
	printf(" 10진수 a : %d \n", a);
	printf(" 16진수 a : %x \n", a); // 16진수에서 10은 16이다.

	printf("short int: %d바이트\n", sizeof(short int));
	printf("      int: %d바이트\n", sizeof(int));
	printf(" long int: %d바이트\n", sizeof(long int));
	printf(" long long int: %d바이트\n", sizeof(long long int));

	
	//short int b = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2;
	//printf("b는 %d \n", b);



	return 0;
}