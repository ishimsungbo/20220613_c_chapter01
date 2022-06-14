#include <stdio.h>

int edu01() {

	double a, b;
	int res1, res2;

	a = 10.5;
	b = 10.5;

	res1 = a + b;
	res2 = (int)a + (int)b; // 실수형을 정수형으로 변환한다. .5는 계산을 안함.

	printf("res1 : %d \n", res1);
	printf("res2 : %d \n", res2);

	return 0;
}

int edu02() {
	
	char ch = 'A';
	int i = 10;
	float f = 10.5;
	double res;

	res = ch + i + f;

	printf("res : %.2f \n", res);

	return 0;
}

/*문자 상수*/
int edu03() {

	char ch = 'A';

	printf("ch : %d \n", sizeof(ch));   //1바이트 할당
	printf("ch : %d \n", sizeof('A'));  //상수 A의 크기는  int 형으로 메모리 공간을 4바이트로 잡기에...

	return 0;
}


/*아스키코드 만들어보기*/
int edu04() {

	char ch;
	int i;

	for (i = 1, ch = 'a' - 32; ch < 'z' - 32; ch++, i++) {
		if (i%5) {
			printf("나누어 질때? %d",i%5);
			//printf("%3c : %3d \t" , ch, ch);
		}
		else{
			printf("아닐때 %d", i%5);
			//printf("%3c : %3d \n", ch, ch);
		}
	}

	printf("\n");

	/*
for (int i = 1; i < 11 ; i++) {
	if (i%2) {
		printf("%d",i);
	}
	else {
		printf("%d \n", i);
	}
}
*/
	return 0;
}

int edu05() {


	return 0;
}