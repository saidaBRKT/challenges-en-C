#include<stdio.h>
#include<stdlib.h>

void tri_bulles(int n,int t[])
{
	int temp,i,j;
	for(j=0;j<n;j++)
	{
	
	for(i=0;i<n;i++)
	{
		if(t[i]>t[i+1])
		{
			temp=t[i];
			t[i]=t[i+1];
			t[i+1]=temp;
		}
	}
	}
}

int main()
{
	int i,n,tab[100];
	
	printf("entrez la taille du tableau :");
	scanf("%d",&n);
	
    printf("entrez des entiers :");
    
    for(i=0;i<n;i++)
    scanf("%d",&tab[i]);
    
    printf("avant le tri :\n");
      for(i=0;i<n;i++)
    printf("%d\t",tab[i]);
    
    tri_bulles(n,tab);
    
     printf("aprés le tri :\t");
    for(i=0;i<n;i++)
    printf("%d\t",tab[i]);
	
	return 0;
}
