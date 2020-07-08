#include <stdio.h>

/* 打印摄氏温度转华氏温度对照表 */
int main ()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* 温度表的下限 */
  upper = 300; /* 温度表的上限 */
  step = 20; /* 步长 */

  celsius = lower;

  while (celsius <= upper)
  {
    fahr = (9.0/5.0*celsius) +32.0; /* 摄氏温度转为华氏温度公式： (9/5*℃)+32 */
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  
}