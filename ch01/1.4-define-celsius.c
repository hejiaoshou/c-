#include <stdio.h>

#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 // step size

int main()
{
  int celsius;
  for (celsius = LOWER; celsius < UPPER; celsius = celsius + STEP)
  {
    printf("%3d %6.1f\n", celsius, (9.0/5.0*celsius) + 32);
  }
}