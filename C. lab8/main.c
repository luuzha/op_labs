#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //5
    char a[100], b[100];
    scanf("%s", a);
    strncpy(b, a, sizeof(b));
    printf("a: %s, b: %s\n", a, b);

    // 7
    char c[100];
    scanf("%s", c);
    printf("%d\n", strlen(c));

    // 9
    char d[100];
    char symbol;
    scanf("%s", d);
    fflush(stdin);
    scanf("%s", &symbol);
    char *last = strrchr(d, symbol);
    if (last) {
        printf("Позиция: %ld\n", last - d);
    } else {
        printf("Нет такого символа \n");
    }

    // 11
    char s1[100];
    char s2[100];

    scanf("%s", s1);
    scanf("%s", s2);

    int count = 0;
    for (char *p = s1; *p; ++p) {
        if (strchr(s2, *p)) {
            count++;
        }
    }
    printf("%d\n", count);

    // 13
    

    return 0;
}
