#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int xa,ya,xb,yb,xp,yp;
    float AB,AP,PB;

    printf("entrez la coordonne xa :\t");
    scanf("%d",xa);

    printf("entrez la coordonne ya :\t");
    scanf("%d",ya);

    printf("entrez la coordonne xb :\t");
    scanf("%d",xb);

    printf("entrez la coordonne yb :\t");
    scanf("%d",yb);

    printf("entrez la coordonne xp :\t");
    scanf("%d",xp);

    printf("entrez la coordonne yp :\t");
    scanf("%d",yp);

    AB=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
    AP=sqrt(pow((xp-xa),2)+pow((yp-ya),2));
    PB=sqrt(pow((xb-xp),2)+pow((yb-yp),2));
    if(AB=AP+PB)
        printf("le point P appartient au segment AB");
    else
        printf("le point P n appartient pas au segment AB");
    return 0;
}
