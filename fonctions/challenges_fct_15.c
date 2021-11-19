#include<stdio.h>
#include<stdlib.h>
void Trier(int *p, int n)
{
    int i,j,tmp;
    for(i=0;i<n-1;i++)
       for(j=0;j<n-i-1;j++)
          if(p[j]>p[j+1])
          {
              tmp = p[j];
              p[j] = p[j+1];
              p[j+1] = tmp;
          }
}
int main()
{
    int i,n;
    int t[100];
    printf("Donnez le nombre d'elements du tableau: ");
    scanf("%d",&n);
    printf("Entrez les elements du tableau:\n");
    for(i=0;i<n;i++)
        scanf("%d",&t[i]);
    Trier(t,n);
    printf("Le tableau trie:\n");
    for(i=0;i<n;i++)
        printf("%d ",t[i]);
    printf("\n");
    
    return 0;
}
