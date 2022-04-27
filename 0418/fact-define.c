#include <stdio.h>
#include <stdlib.h>

// -DDEBUG を付けてコンパイルした際にのみ，以下のデバッグメッセージが表示されるようにせよ．
int fact (int x) {
  if (x > 0) {
    #ifdef DEBUG
    printf("x = %d\n", x);
    #endif
    return ( x * fact (x - 1) );
  } else {
    #ifdef
    printf("x = %d, return 1\n", x);
    #endif
    return 1;
  }
}

int main (int argc, char *argv[]) {
  int x, ret;
  x = atoi(argv[1]);
  ret = fact(x);
  printf("ret = %d\n", ret);
}
