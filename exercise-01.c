#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
   char name[] = "china";
   char *p = name;

   for (; *p != '\0'; p++) {
      *p += 4;
   }
   
   int n;
   for (n = 0; n < strlen(name); n++) {
      printf("The string become: %c\n", name[n]);
   }
   return 0;
}
