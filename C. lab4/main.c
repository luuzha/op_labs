#include <stdio.h>
#include <inttypes.h>

int main() {
    int number1;
    int number2;

    scanf("%d", &number1);

    printf("%d", (number1 >= -3) && (number1 <= 6));

    printf("\n");

    scanf("%d", &number2);

    if (number2 & (1 << 4)) {
        printf("Значение бита равно 1");
    } else {
        printf("Значение бита равно 0");
    }

    return 0;
}
