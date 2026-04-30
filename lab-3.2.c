#include <stdio.h>

int main() {
    float x, y;

    printf("=== Визначення місцезнаходження точки ===\n");
    printf("Введіть x: ");
    scanf("%f", &x);

    printf("Введіть y: ");
    scanf("%f", &y);

    float result = x - y + 1;

    if (result > 0) {
        printf("Точка знаходиться вище за лінію.\n");
    } else if (result < 0) {
        printf("Точка знаходиться нижче за лінію.\n");
    } else {
        printf("Точка знаходиться на лінії.\n");
    }

    return 0;
}