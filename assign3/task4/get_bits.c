#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Note, the bits are counted from right to left.
// Return the bit states of x within range of [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
unsigned *get_bits(unsigned x,
                   unsigned start,
                   unsigned end)
{
    unsigned int *a= malloc(sizeof(unsigned int *)*end-start+1);
    x>>=start;
    for(int c=0;c<end-start+1;c++){
        if(x&1){
          a[c]=1;
        }
        else{
          a[c]=0;
        }
        x>>=1;
    }
    return a;
    // YOUR CODE HERE
    // Returning NULL is a placeholder
    // get_bits dynamically allocates an array a and set a[i] = 1 when (i+start)-th bit
    // of x is 1, otherwise set a[i] = 0;
    // At last, get_bits returns the address of the array.
}
