#include <stdlib.h>  // for rand()

char randchar(void) {
  return 'A' + (rand() % 26);
}
