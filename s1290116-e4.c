#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  int countH = 0, countT = 0;
  char name[20];

  srand(time(NULL));

  printf("Tossing a coin...\n");
  printf("Who are you?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
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
  if (countH > countT) {
    printf("%s won!\n", name);
  } else {
    printf("%s lost.\n", name);
  }
  return 0;
}
