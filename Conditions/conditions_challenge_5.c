#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 main()
{

 int a,b,c;
 float delta;

 printf("\t\tCalcul des solutions reelles d une equation du second degre\n\n\n");
debut:
 printf("entrez la coefficient a :\n");
 scanf("%d",&a);
 printf("entrez la coefficient b :\n");
 scanf("%d",&b);
 printf("entrez la coefficient c :\n");
 scanf("%d",&c);


    delta = pow(b,2) - 4*a*c;
    printf("%.2f", delta);


 if (a==0 && b==0 && c==0)    // 0x = 0
 {
   printf("Tout reel est une solution de cette equation.\n");
   goto debut;
 }

 else if (a==0 && b==0)       // Contradiction: c # 0 et c = 0
 {
   printf("Cette equation ne possede pas de solutions.\n");
   goto debut;
 }

 else if (a==0)               // bx + c = 0
    {
     printf("La solution de cette equation du premier degre est :\n");
     printf(" x = %.2f\n", (float)-c/b);
     goto debut;
    }

 else if (delta<0)            // b^2-4ac < 0
 {
    printf("Cette equation n a pas de solutions reelles.\n");
    goto debut;
 }

 else if (delta==0)           // b^2-4ac = 0
    {
     printf("Cette equation a une seule solution reelle :\n");
     printf(" x =  %.2f\n", (float)-b/(2*a));
     goto debut;
    }
 else                         // b^2-4ac > 0
    {
     printf("Cette equation a deux solutions reelles :\n");
     printf(" x1 = %.2f\n", (-b+sqrt(delta))/(2*a));
     printf(" x2 = %.2f\n", (-b-sqrt(delta))/(2*a));
     goto debut;
    }
  return 0;
}
