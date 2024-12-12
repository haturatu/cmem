#include <stdio.h>
#include <string.h>

int main()
{
  char str1[5] = "test";
  char str2[5] = {'t', 'e', 's', 't', '\0'};

  if (memcmp(str1, str2, 5*sizeof(char)) == 0) {
    printf("str1とstr2は同じです。\n");
  } else {
    printf("str1とstr2は異なります。\n");
  }
  // => str1とstr2は同じです。
}
