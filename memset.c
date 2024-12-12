#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i;
  char *a = malloc(5 * sizeof(char));

  // 配列の要素を全て0に設定
  memset(a, 0, 5*sizeof(char));

  for (i = 0; i < 5; ++i) {
    printf("a[%d] = %d,", i, a[i]);
  }

  // => a[0] = 0, a[1] = 0, a[2] = 0, a[3] = 0, a[4] = 0,
  free(a);
}
