#include <stdio.h>
#include <stdlib.h>

// Set the bits of x within range of [start, end], in which both are inclusive
// Assume 0 <= start & end <= 31
void set_bits(unsigned * x,
             unsigned start,
             unsigned end,
             unsigned *v) {
    int i,j,m,n,p,c;
    n=0;
    p=0;
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
       arr[j]=v[n++];
    }
    for(m = 0; m<32;m++){
        if (arr[m]==1)
      {
        int t = 1;
        for (c = 0; c < m; ++c){
          t *= 2;
        }
          p+=t;
      }
    }
    *x = p;
}          
    // YOUR CODE HERE
    // No return value
    // v points to an array of at least (end-start+1) unsigned integers.
    // if v[i] == 0, then set (i+start)-th bit of x zero, otherwise, set (i+start)-th bit of x one.


