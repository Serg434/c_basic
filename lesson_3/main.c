#include <stdio.h>

/* 
1. Ввести 3 числа с клавиатуры(float), найти среднее арифметическое и умножить на 2.5
Вывод формата:

result %f

2. Ввести число типа float с клавиатуры и вывести второй знак после запятой
Например: ввели число 123.4567

result 5
*/


int main (int argc, char **argv)
{
  float a, b, c;
  float d;
  int e, dint;
  printf("Please enter 3 float numbers for task 1:\n");
  scanf("%f%f%f", &a, &b, &c);
  printf("((%.2f + %.2f + %.2f) / 3) * 2 = %.2f\n", a, b, c, ((a+b+c)/3)*2.5);
  printf("Please enter 1 float number for task 2:\n");
  scanf("%f", &d);
  d *= 10;
  dint = d;
  dint *= 10;
  d = d * 10;
  e = d - dint;
  printf("Second number after dot in our example is: %d\n", e);

  return 0;
}
