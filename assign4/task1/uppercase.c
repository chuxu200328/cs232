#include <stdio.h>
#include<ctype.h>
int main(int argc, char *argv[]) {
  char str[10090];
   int ch, n = 0;

   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }

   for (int i = 0; i < n; ++i){
     str[i] = toupper(str[i]);
   }
  printf("%s",str);
   return 0;
}

