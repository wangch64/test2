#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
   char a[10];
   char b[10];
   char c[32];    

   strcpy(a, "0123456789abcdef");
   strcpy(b, "0123456789abcdef");
   strcpy(c, a);
   strcat(c, b);
   printf("c=%s\n", c);
   return 0;

}
