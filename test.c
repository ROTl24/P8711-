#include <stdio.h>
unsigned long long int n = 1000000000000000000ull;

int main() {
	scanf_s("%llu", &n);
	while (n) {
		printf("%llu",n);
		if (n != 1) {
			printf(" ");
		}
		n = n / 2;
	}
	return 0;
}