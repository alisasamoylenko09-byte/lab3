#include <stdio.h>

int main() {
    int index;
    
    printf("=== Визначення поштового індексу ===\n");
    printf("Введіть поштовий індекс: ");
    scanf("%d", &index);
    
    switch (index) {
        case 58000:
            printf("Це поштовий індекс міста - Чернівці\n");
            break;
        case 33000:
            printf("Це поштовий індекс міста - Рівне\n");
            break;
        case 49000:
            printf("Це поштовий індекс міста - Дніпро\n");
            break;
        case 61000:
            printf("Це поштовий індекс міста - Харків\n");
            break;
        case 65000:
            printf("Це поштовий індекс міста - Одеса\n");
            break;
        default:
            printf("Місто не знайдено\n");
            break;
    }
    
    return 0;
}