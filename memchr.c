#include <stdio.h>
#include <string.h>

int main()
{
  char *ptr;
  char str[] = "test";

  ptr = memchr(str ,'s', strlen(str));
  if (ptr != NULL) {
    printf("文字「s」の場所: %ld\n", ptr - str + 1);
  } else {
    printf("文字「s」は見つかりませんでした。\n");
  }
  // => 文字「s」の場所: 3
}
