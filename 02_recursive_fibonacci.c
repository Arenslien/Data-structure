#include <stdio.h>

int fibonacci(int n) {
	if(n==0 || n==1) {
//		printf("1 ");
		return 1;
	}
	else {
//		printf("%d ", n);
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
int main() {
	int input_number; 
	printf("�Ǻ���ġ ������ ���� �Է����ּ��� : ");
	scanf("%d", &input_number);
	printf("�ش� ���� �Ǻ���ġ ���� ���� : %d", fibonacci(input_number));
	return 0;
}
