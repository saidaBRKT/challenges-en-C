#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre ,x, v =0, i;

    printf("Saisir un nombre : ");
    scanf("%d", &nombre);
    for(i = 1; i <= nombre; i++){
        if(nombre %i == 0){
        v++;
        }
    }
    if(v == 2){
        printf("Le nombre %d qui est un nombre premier", nombre);
    }
    else{
        printf("Le nombre %d qui est un nombre n est pas premier", nombre);
    }
    return 0;
}
