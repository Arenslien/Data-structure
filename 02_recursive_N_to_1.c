#include <stdio.h>

int Print(int n) {
	if(n==1) {
		printf("1\n");
	}
	else {
		printf("%d\n", n);
		Print(n-1);
	}
}
int Print2(int n) {
	if(n==1) {
		printf("1\n");
	}
	else {
		Print2(n-1);
		printf("%d\n", n);
	}
}
int main() {
	Print(10);
	printf("=====================\n");
	Print2(10);
	return 0;
}
