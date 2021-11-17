#include<stdio.h>
#include<stdlib.h>

int main()
{

	int n,s=0,e,max=0;
	printf("entrez le nombres des entiers :\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("entrez un entier positifs inferieurs a 100 terminee par 0:\n");
     	scanf("%d",&e);
        if(e==0)
        break;
     	if(e<=100 && e>0)
     	{
     		if(e>max)
     		{
     			max=e;
			}
     		s+=e;
		}

	}

	printf("la somme est : %d \n",s);
	printf("le max est : %d\n",max);

	return 0;
}
