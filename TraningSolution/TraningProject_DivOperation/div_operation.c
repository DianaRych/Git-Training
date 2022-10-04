#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "russian");
    int a, b;
    float div;
    printf("1 значение - ");
    scanf_s("%d", &a);
    printf("2 значение - ");
    scanf_s("%d", &b);
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