/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  int program_continue = 1;

  while (program_continue == 1)
  {
    float r, a, b, c;
    printf("Enter radius (in mm):\n");
    scanf("%f", &c);
    if (c == 0)
    {
      program_continue = 0;
      printf("Exit\n");
    }
    else
    {
      r = c / 25.4;

      a = PI * r * r;

      b = 2 * PI * r;

      printf("Circle's area is %3.2f (sq in).\n", a);
      printf("Its circumference is %3.2f (in).\n", b);
    }
  }
}
