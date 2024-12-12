#include <stdio.h>
#include <string.h>

int main()
{
  char str[20] = "abc,def";

  printf("memmove()実行前\n");
  printf("%s\n", str);
  /// => abc,def

  if (memmove(str+4, str, strlen(str))) {
    printf("memmove()実行後\n");
    printf("%s\n", str);
    // => abc,abc,def
  } else {
    fprintf(stderr, "エラー発生\n");
  }
}
