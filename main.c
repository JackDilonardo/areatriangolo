#include <stdio.h>
#include <math.h>

int main () {
   float a, b, c; // tre lati triangolo
   float p; // semiperimetro del triangolo
   float area; // area del triangolo
   
   a = 10;
   b = 15;
   c = 10;
   
   if (a < 0 || b < 0 || c < 0) {
      printf ("Almeno un lato è negativo.\n");
      return 1; // il codice di errore 1 è specifico a questo programma ed indica la presenza di almeno 1 lato negativo
   }
   
   if (a+b > c && a+c > b && b+c > a) {
      p = (a+b+c) / 2;
      area = sqrt (p * (p-a) * (p-b) * (p-c));
      printf ("L'area del triangolo è: %f\n", area);
      return 0;
   } else {
       printf ("I lati forniti non sono parte di un triangolo.\n");
     }
/* Struttura alternativa:

   if ( a+b < c || a+c < b || b+c < a) {
      printf("I lati forniti non sono parte di un triangolo.\n");
      return 2; // in questo caso, il codice di errore è 2 ed indica la presenza di lati che non sono parte di un triangolo
   } 
   
   
Questa struttura elimina la necessità del ramo else, ma è ugualmente corretta.
*/
  return 0;
}
