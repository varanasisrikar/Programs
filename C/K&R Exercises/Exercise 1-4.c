#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("Celsius-Fahrenheit Step Table");
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%6.1f%3.0f\n", fahr, celsius);
    celsius = celsius + step;
  }
}