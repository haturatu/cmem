#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *mem_allocation;

  // 動的メモリ確保(0で初期化)
  mem_allocation = calloc(20, sizeof(char));
  if (mem_allocation == NULL) {
    fprintf(stderr, "メモリ確保失敗\n");
    return 1;
  } else {
    mem_allocation[0] = 't';
    mem_allocation[1] = 'e';
    mem_allocation[2] = 's';
    mem_allocation[3] = 't';
  }

  printf("格納した文字列 : %s\n", mem_allocation);
  free(mem_allocation);
  // => test
}
