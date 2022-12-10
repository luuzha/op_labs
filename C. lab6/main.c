#include <stdio.h>
#include <stdlib.h>

int main() {
    char m[4];

    m[0] = 'W';
    m[1] = 'O';
    m[2] = 'R';
    m[3] = 'K';

    for (char *p = m; p <= &m[3]; p++) {
        printf("%c", *p);
    }

    printf("\n");

    char* m2;
    m2 = (char*)malloc(sizeof(char) * 4);

    m2[0] = 'W';
    m2[1] = 'O';
    m2[2] = 'R';
    m2[3] = 'K';

    for (int i = 0; i < 4; i++) {
        printf("%c", m2[i]);
    }

    free(m2);

    return 0;
}
