#include <stdio.h>
#include <math.h>

int main () {
   float a, b, c; // tre lati triangolo
   float p; // semiperimetro del triangolo
   float area; // area del triangolo
   
   a = 10;
   b = 15;
   c = 10;
   
   if (a+b > c && a+c > b && b+c > a) {
      p = (a+b+c) / 2;
      area = sqrt (p * (p-a) * (p-b) * (p-c));
      printf ("L'area del triangolo è: %f\n", area);
      return 0;
   } else {
       printf ("I lati forniti non sono parte di un triangolo.\n");
     }
  
  return 0;
}
