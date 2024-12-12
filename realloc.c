#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *mem_allocation;

  // 動的メモリ確保
  mem_allocation = malloc(20 * sizeof(char));
  if (mem_allocation == NULL) {
    fprintf(stderr, "メモリ確保失敗\n");
    return 1;
  }

  // 動的メモリ再確保
  mem_allocation = realloc(mem_allocation, 40 * sizeof(char));
  if (mem_allocation == NULL) {
    fprintf(stderr, "メモリ確保失敗\n");
    return 1;
  }
  free(mem_allocation);
}
