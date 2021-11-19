#include<stdio.h>
#include<stdlib.h>
void Afficher_Carre(int *p,int n)
{
     int i;
     for(i=0;i<n;i++)
        printf("%d ",p[i]*p[i]);
     printf("\n");
}
void Carre(int a)
{
    printf("%d ",a*a);
}
int main()
{
    void Afficher_Carre(int*,int);
    void Carre(int);
    int t[100];
    int i,n;
    printf("Entrez le nombre des elements du tableau:\n");
    scanf("%d",&n);
    printf("Entrez les elements du tableau:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&t[i]);
    }
    printf("En utilisant la fonction Afficher_Carre:\n");
    Afficher_Carre(t,n);
    printf("En utilisant la fonction Carre:\n");
    for(i=0;i<n;i++)
       Carre(t[i]);
    printf("\n");
    system("pause");
    return 0;
}
