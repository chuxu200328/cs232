#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  int i;

  for(i=0;i <= 10; i++){
    int * a = malloc(sizeof(int *)*10);
    a[i] = i;
    printf("%d\n", a[i]);
    free(a);
  }

}
