#include<stdio.h>
#include<stdlib.h>

int part(int t[],int deb,int fin)
{
	int i,j,pivot,temp;
	pivot=t[(deb+fin)/2];
	i=deb;
	j=fin;
	while(i<j)
	{
		while(pivot>t[i])
		i++;
		while(pivot<t[j])
		j--;
		
		if(i<j)
		{
			temp=t[i];
			t[i]=t[j];
			t[j]=temp;
		}
	}
	return j;
}

void rapid(int tab[],int deb,int fin)
{
	int ipivot;
	if(deb<fin)
	{
		ipivot=part(tab,deb,fin);
		rapid(tab,deb,ipivot-1);
		rapid(tab,ipivot+1,fin);
		
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
    
    rapid(tab,0,n-1);
    
     printf("apres le tri :\t");
    for(i=0;i<n;i++)
    printf("%d\t",tab[i]);
	
	return 0;
	
}
