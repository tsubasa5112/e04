#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  int countH = 0, countT = 0;

  srand(time(NULL));

  printf("Tossing a coin...\n");
  for (i = 0; i < 3; i++) {
    printf("Round %d: ", i + 1);
    if (rand() % 2 == 1) {
      printf("Heads\n");
      ++countH;
    } else {
      printf("Tails\n");
      ++countT;
    }
  }
  printf("Heads: %d, Tails: %d\n", countH, countT);
  return 0;
}
