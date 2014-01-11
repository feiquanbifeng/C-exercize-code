#include <stdio.h>
#include <string.h>

void print(int (*p)[2]) {
   int n, m;
   printf("array size:%d\n", sizeof(*p) / 2); 
   for (m = 0; m < 2; m++) {
     for (n = 0; n < 2; n++) {
       printf("print result:%d or %d\n", (*p + m)[n], *(p[m] + n));
     }
   }
}

int main(int argc, char *argv[]) {
   int arr[][2] = {1, 2, 3, 4};

   print(arr);
   return 0;
}
