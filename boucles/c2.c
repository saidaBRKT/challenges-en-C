#include <stdio.h>
#include <stdlib.h>

int main(){
    int l, y = 0, i, j;
    printf("entrez le nombre de ligne : ");
    scanf("%d", &l);

    for(i = 1; i <= l; i++)
    {
        y=0;
          for(j = 1; j <= l - i; j++)
              {
            printf(" ");
             }
            while(y != 2*i-1)
            {
              printf("*");
                y++;
            }
        printf("\n");
    }
    return 0;
}
