#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Note, the bits are counted from right to left. 
// Flip the bits of x within range [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void flip_bits(unsigned * x,
              unsigned start,
              unsigned end) {
                int i,j,m,n;
                n=0;
                unsigned a = *x;
                int arr[32];
    for(i = 0; i<32;i++){
        if (a&1)
      {
          arr[i]=1;
      }
      else
      {
          arr[i]=0;
      }
      a>>=1;
    }
    for(j = start; j<=end;j++){
        if (arr[j]==0)
      {
          arr[j]=1;
      }
      else
      {
          arr[j]=0;
      }
    }
    for(m = 0; m<32;m++){
        if (arr[m]==1)
      {
          n+=pow(2,m);
      }
    }
    *x = n;
}
