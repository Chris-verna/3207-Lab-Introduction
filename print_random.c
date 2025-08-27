#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"   // declares randchar()

int main(void) {
    int a;

    srand((unsigned) time(NULL));

    printf("Today's random word: ");
    for (a = 0; a < 7; a++)
        putchar(randchar());
    putchar('\n');

    return 0;
}
