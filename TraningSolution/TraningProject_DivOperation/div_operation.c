#include <stdio.h>
int main() {
	int a, b;
	float div;
	scanf_s("%d %d", &a, &b);
    if (b == 0) {
        printf("На 0 делить нельзя\n");
    }
    else {
        if (a == 0) {
            printf("Ответ 0");
        }
        else {
            div = a / b;
            printf("Ответ - %f", div);
        }
    }
	system("pause");
	return 0;
}