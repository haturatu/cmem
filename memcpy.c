#include <stdio.h>
#include <string.h>

int main()
{
  char str1[10] = "Hi johnny";
  char str2[10] = {0};
  if (memcpy(str2, str1, strlen(str1))) {
    printf("コピー元: %s\nコピー先: %s\n", str1, str2);
    // コピー元: Hi johnny
    // コピー先: Hi johnny
  } else {
    fprintf(stderr, "Error while coping str1 into str2.\n");
  }
}
