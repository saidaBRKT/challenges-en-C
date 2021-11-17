#include<stdio.h>
#include<stdlib.h>

int add(int a,int b)
{
	return a+b;
}

int main()
{
  int x,y;
  printf("entrez la valeur de x :");
  scanf("%d",&x);
  printf("entrez la valeur de y :");
  scanf("%d",&y);
  
  printf("%d + %d =%d",x,y,add(x,y));
	
	return 0;
}
