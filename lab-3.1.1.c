#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;
    int nu_pidiyde = 1; 

    printf("=== Обчислення значення виразу ===\n");
    printf("Введіть b (1, 2 або 3): ");
    scanf("%d", &b);
    printf("Введіть c: ");
    scanf("%d", &c);

    if (b == 1)
        a = 4*b + 5*c;

    if (b == 2) {
        if (4 - b*c >= 0)
            a = sqrt(4 - b*c);
        if (4 - b*c < 0) {
            printf("Неможливо обчислити: корінь з від'ємного числа\n");
            nu_pidiyde = 0;
        }
    }

    if (b == 3) {
        if (c != 0)
            a = (double)(b - 2) / (c*c);
        if (c == 0) {
            printf("Неможливо обчислити: ділення на нуль не дозволяється в математиці.\n");
            nu_pidiyde = 0;
        }
    }

    if (nu_pidiyde)
        printf("a = %.2lf\n", a);

    return 0;
}