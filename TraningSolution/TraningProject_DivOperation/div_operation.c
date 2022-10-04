#include <stdio.h>
int main() {
	int a, b;
	float div;
	scanf_s("%d %d", &a, &b);
	if (b == 0) {
		printf("Ошибка");
	}
	else {
		div = a / b;
		printf("%f", div);
	}
	system("pause");
	return 0;
}