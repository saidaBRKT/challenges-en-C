#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int NbrInv = 0, nbr;

   printf("Entrez un nombre a inverser\n");
   scanf("%d", &nbr);

      NbrInv = (nbr%10)*100;
      nbr=nbr/10;
      NbrInv = NbrInv + (nbr%10)*10;
      nbr = nbr/10;
      NbrInv=NbrInv+nbr;


   printf("Le nombre en sens inverse est : %d\n", NbrInv);

   return 0;
}
