#include<stdio.h>
void trifusion (int i,int j,int tab[],int tmp[])
{
    if (j <= i)
    {
        return ;
    }
    int m = (i + j)/2;
    trifusion(i,m,tab,tmp);
    trifusion(m+1,j,tab,tmp);
    int pg = i;
    int pd = m + 1;
    int c ;
    for (c = i;c <=j;c++)
    {
        if (pg == m+1)
        {
            tmp[c] = tab[pd];
            pd++;
        }
        else if (pd == j + 1)
        {
            tmp[c] = tab[pg];
            pg++;
        }
        else if(tab[pg] < tab[pd])
        {
            tmp[c] = tab[pg];
            pg++;
        }
        else 
        {
            tmp[c] = tab[pd];
            pd++;
        }
    }
    for(c = i;c <=j;c++)
    {
        tab[c] = tmp[c];
    }
}
int main()
{
    int i,nbr,tab[100],tmp[100];
    printf("entree le nombre de case");
    scanf("%d",&nbr);
    printf("entre %d d'entier",nbr);
    for (i = 0;i<nbr;i++)
        scanf("%d",&tab[i]);
         trifusion(0,nbr-1,tab,tmp);

    printf("\nles nombre d'entier est");
    for (i = 0;i<nbr;i++) 
    {
        printf("%3d",tab[i]);
    }
    printf("\n");
    return 0;
}

