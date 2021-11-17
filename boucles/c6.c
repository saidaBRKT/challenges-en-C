#include <stdio.h>
#include<stdio.h>
int main ()
{
int nbr;
int m = 0;

printf("Veuillez entrer un nombre entier:");
scanf("%i",&nbr);
int n=2;
printf("Les nombres premiers sont:\n");
while(n<=nbr){
for(int i=1;i<=n;i++){
if(n%i==0){m++;}
}
if(m==2){
printf("%d\n",n);
}
m=0;
n++;
}
}
