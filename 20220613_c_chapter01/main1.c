#include <stdio.h>

int main1() {
	
	int a = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2;  //2의 8승
	int b;
	

	printf("a :  %d \n",a);
	printf("변수 b에 할당된 메모리 크기 %d \n", sizeof(b)); //정수형은 4바이트 크기만큼 메모리를 할당받는다. 컴퓨터 시스템에 따라 2,4 바이트를 받음.
	printf("자료형 int의 메모리 크기 %d \n", sizeof(int));

	// 8진수 데이터 저장
	int c = 010;

	//int cc = 08;  8은 8진수에 없으니까 에러다.

	printf("  8진수 c: %o \n", c);
	printf("  8진수 c: %#o \n", c);  // 출력 결과 : 010
	printf(" 10진수 c: %d \n", c);

	// 0x10 = 16진수 16을 의미

	int aa = 0x10;  // 0001 0000  8비트 공간에 16을 저장함.
	
	printf(" 16진수 aa: %x \n", aa);
	
	printf(" 10진수 aa: %d \n", aa);
	
	

	return 0;
}