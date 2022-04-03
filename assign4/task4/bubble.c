/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include<stdlib.h>

#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

int compare(char t[],char b[]){
  int s;
  size_t lent = strlen(t)-1,lenb=strlen(b)-1;
  if(lent-lenb>0){
    for(s = 0;s < lenb;s++){
      if(t[s] < b[s]) return -1;
      else if(t[s] > b[s])return 1;
    }
    return 1;
  }
  else {
    for(s = 0;s < lenb;s++){
      if(t[s] < b[s]) return -1;
      else if(t[s] > b[s])return 1;
    }
    return -1;
  }
}

int main()
{
  char * Strings[NUM];
char temp[NUM][LEN];
  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length. However, each 
	 string stored in array Strings must not waste space. That is, only the buffer
	 used by fgets() to temporary store the string read from input stream needs to 
	 be LEN bytes long.  
	 Note that the newline and NULL characters will be included in LEN.
  */
  for(int i = 0;i < NUM;i++){
    Strings[i]=fgets(temp[i], LEN, stdin);
    }
    
  puts("\nHere are the strings in the order you entered:");
  /* Write a for loop here to print all the strings. */
  for(int j = 0;j < NUM;j++){
     printf("%s",Strings[j]);
  }
  
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) Implement a swap function to swap two strings by swapping pointers
	    without copying any chars.You are not allowed to use any C library 
	    functions in swap.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */
  /* Output sorted list */
  for(int m = 0;m < NUM;m++){
    for(int n = 0;n < NUM-1-m;n++){
      if(compare(Strings[n],Strings[n+1])==1){
        char *q=Strings[n];
        Strings[n]=Strings[n+1];
        Strings[n+1]=q;
      }
    }
  }
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */
for (int k = 0; k < NUM; k++) {
    printf("%s", Strings[k]);
  }
  return 0;
}
