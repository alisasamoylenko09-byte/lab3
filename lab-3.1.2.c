#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;

    printf("=== Обчислення значення виразу ===\n");
    printf("Введіть b (1, 2 або 3): ");
    scanf("%d", &b);
    printf("Введіть c: ");
    scanf("%d", &c);

    if (b == 1) {
        a = 4*b + 5*c;
        printf("a = %.2lf\n", a);
    }
    else if (b == 2) {
        if (4 - b*c >= 0) {
            a = sqrt(4 - b*c);
            printf("a = %.2lf\n", a);
        } else {
            printf("Неможливо обчислити: корінь з від'ємного числа\n");
        }
    }
    else if (b == 3) {
        if (c != 0) {
            a = (double)(b - 2) / (c*c);
            printf("a = %.2lf\n", a);
        } else {
            printf("Неможливо обчислити: ділення на нуль не дозволяється в математиці.\n");
        }
    }
    else {
        printf("b має бути 1, 2 або 3\n");
    }

    return 0;
}