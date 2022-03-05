#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i,j;
  char buf[MAX_BUF];
  fgets(buf, MAX_BUF, stdin);
  len = strlen(buf);
  do {
    for(j=0;j<26;j++){
      if(buf[len-2] == j+65 || buf[len-2] == j+97){
        letter_frequency[j] ++;
        break;
      }
    }
    len --;
  } while (len > 1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
  return 0;
}
