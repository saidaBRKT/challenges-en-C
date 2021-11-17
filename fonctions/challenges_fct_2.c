#include<stdio.h>
#include<stdlib.h>

void permut(int a,int b)
{
	int temp;
	printf("avant permutation :\n");
	printf("%d\t",a);
	printf("%d\n",b);
	temp=a;
	a=b;
	b=temp;
	printf("apres permutation :\n");
	printf("%d\t",a);
	printf("%d\n",b);
	
}

int main()
{
  int x,y;
  printf("entrez la valeur de x :");
  scanf("%d",&x);
  printf("entrez la valeur de y :");
  scanf("%d",&y);
  
  permut(x,y);
	
	return 0;
}
