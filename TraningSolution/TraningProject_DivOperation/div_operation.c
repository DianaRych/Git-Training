#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "russian");
    int a, b;
    float div;
    printf("1 ???????? - ");
    scanf_s("%d", &a);
    printf("2 ???????? - ");
    scanf_s("%d", &b);
    if (b == 0) {
        printf("?? 0 ?????? ??????\n");
    }
    else {
        if (a == 0) {
            printf("????? 0");
        }
        else {
            div = a / b;
            printf("????? - %f", div);
        }
    }
    system("pause");
    return 0;
}