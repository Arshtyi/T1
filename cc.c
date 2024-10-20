#include <stdio.h>
#include <string.h>

/*************
 * 
 *对宏“替换”的直观展示 
 * 查看.i文件
 * 
 * 
 */


#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))


int main()
{ 
  char s[1000] = {0};
  strcpy(s, "abcd");
  int i = 0;
  putchar(TOUPPER(s[++i]));
  return 0;
}


