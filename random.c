#include <stdlib.h>  // for rand()
#include "random.h"  // for prototype

char randchar(void) {
    return 'A' + (rand() % 26);
}
