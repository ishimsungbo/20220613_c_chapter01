#include <stdio.h>

int edu01() {

	double a, b;
	int res1, res2;

	a = 10.5;
	b = 10.5;

	res1 = a + b;
	res2 = (int)a + (int)b; // �Ǽ����� ���������� ��ȯ�Ѵ�. .5�� ����� ����.

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

/*���� ���*/
int edu03() {

	char ch = 'A';

	printf("ch : %d \n", sizeof(ch));   //1����Ʈ �Ҵ�
	printf("ch : %d \n", sizeof('A'));  //��� A�� ũ���  int ������ �޸� ������ 4����Ʈ�� ��⿡...

	return 0;
}


/*�ƽ�Ű�ڵ� ������*/
int edu04() {

	char ch;
	int i;

	for (i = 1, ch = 'a' - 32; ch < 'z' - 32; ch++, i++) {
		if (i%5) {
			printf("������ ����? %d",i%5);
			//printf("%3c : %3d \t" , ch, ch);
		}
		else{
			printf("�ƴҶ� %d", i%5);
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