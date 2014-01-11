#include <stdio.h>

int main(int argc, char *argv[]) {
  int p[10];
  
  int n;
  int sum = 0;
  double average = 0;
 
  for (n = 0; n < 10; n++) {
    scanf("%d", &p[n]);
  }

  n = 0;
  int max = p[0];
  int min = p[0];

  while (n < 10) {
    sum += p[n];
    if (p[n] < min) {
      min = p[n];
    }
    if (p[n] > max) {
      max = p[n];
    }
    n++;
  }

  average = sum / 10;
  printf("The sum = %d, average = %f\n", sum, average);
  printf("The max = %d, min = %d", max, min);
  return 0;
}
