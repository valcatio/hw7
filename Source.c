#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int a;
    printf("Введите стоимость покупки в копейках: ");
    scanf("%d", &a);
    int rubles = a / 100;
    int kop = a % 100;
    printf("%d руб. %d ", rubles, kop);
    switch (kop % 100) {
        case 11: case 12: case 13: case 14:
            printf("копеек\n");
            break;
        default:
            switch (kop % 10) {
                case 1:
                    printf("копейка\n");
                    break;
                case 2: case 3: case 4:
                    printf("копейки\n");
                    break;
                default:
                    printf("копеек\n");
                    break;
            }
        }
    return 0;
}