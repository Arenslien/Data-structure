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
	printf("피보나치 수열의 항을 입력해주세요 : ");
	scanf("%d", &input_number);
	printf("해당 항의 피보나치 수열 값은 : %d", fibonacci(input_number));
	return 0;
}
