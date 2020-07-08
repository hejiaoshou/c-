#include <stdio.h>

/* 当 fahr=0，20，……，300时，分别
   打印华氏温度与摄氏温度对照表 */
main ()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* 温度表的下限 */
  upper = 300; /* 温度表的上限 */
  step = 20; /* 步长 */

  fahr = lower;

  printf("fahr to celsius\n");

  while (fahr <= upper)
  {
    celsius = (5.0/9.0) * (fahr-32.0);  /* 华氏温度转摄氏温度公式：(5/9)*(℉-32) */
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  
}