#include <stdio.h>
#include <inttypes.h>

int main() {
    int number1;
    int number2;

    scanf("%d", &number1);

    printf("%"PRIx64, number1);
    printf("\n");
    printf("%"SCNo64, number1);
    printf("\n");
    printf("%"SCNo64, number1>>1);
    printf("\n");
    printf("%"SCNo64, number1);
    printf("\n");
    printf("%"SCNo64, ~number1);
    printf("\n");

    scanf("%d", &number2);
    printf("%"SCNo64, number2^number1);


    return 0;
}
