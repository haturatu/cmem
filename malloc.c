#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char *mem_allocation;

  // 動的メモリ確保
  mem_allocation = malloc(20 * sizeof(char));
  if (mem_allocation == NULL) {
    fprintf(stderr, "動的メモリ確保失敗\n");
    return 1;
  } else {
    strlcpy(mem_allocation, "Hi, My sweet hearts", 20);
  }

  printf("格納した文字列 : %s\n", mem_allocation);
  // => "Hi, My sweet hearts"
  free(mem_allocation);
}
