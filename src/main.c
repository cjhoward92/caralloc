#define _GNU_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct dat {
  int i;
  char c;
};

typedef struct dat dat;

int main() {
  
  void *b = sbrk(0);
  dat *d = (dat *)b;

  brk(d + 1);

  d->i = 10;
  d->c = 'a';

  printf("%d, %d\n", d->i, d->c);

  brk(b);

  return 0;
}