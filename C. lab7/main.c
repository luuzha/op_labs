#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum Genres {
    Classic,
    Pop,
    Rock,
    Rap,
    NewEdge,
    Electronic
};

struct Segment {
    int x1;
    int y1;
    int x2;
    int y2;
    float length;
};

union {
    int num;
    struct {
        unsigned DSL:1;
        unsigned PPP:1;
        unsigned Link:1;
    } modem;
} adsl;

int main() {
    enum Genres r = Rock;
    printf("%d", r);

    printf("\n");

    struct Segment s;
    s.x1 = 0;
    s.y1 = 0;

    s.x2 = 2;
    s.y2 = 2;

    s.length = sqrt((s.x2 - s.x1) * (s.x2 - s.x1) + (s.y2 - s.y1) * (s.y2 - s.y1));

    printf("%f", s.length);

    printf("\n");

    int a;
    scanf("%x", &a);
    adsl.num = a;
    printf("%d %d %d", adsl.modem.DSL, adsl.modem.PPP,  adsl.modem.Link);

    return 0;
}
