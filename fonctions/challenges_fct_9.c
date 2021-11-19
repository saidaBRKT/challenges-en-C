#include<stdio.h>
#include<stdlib.h>

int rechercher(int val,int n,int tab[])
{
	int i=1,pos;
	while(i<n && tab[i]!=val)
	{
		i++;
	}
	if(i<n)
	pos=i;
	else 
	pos=-1;
	
	return pos;
}


int main()
{
	int i,n,val,r,t[50];
	printf("entrez la taille du tableau :");
	scanf("%d",&n);
	

	printf("entrez des entiers :\n");
	
	for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    
	
	printf("entrez une valeur  :\n");
	scanf("%d",&val);
	 
	 r=rechercher(val,n,t);
	 if(r==-1)
	printf("l element n existe pas");
	else
	printf("l element existe est sa position est :%d",r+1);	
	return 0;
}
