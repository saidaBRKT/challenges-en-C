#include<stdio.h>
#include<stdlib.h>



int main()
{
	int a,b,c,d,s;
	float m;
	printf("entrez la valeur de a : \t");
	scanf("%d",&a);
	printf("entrez la valeur de b : \t");
	scanf("%d",&b);
	printf("entrez la valeur de c : \t");
	scanf("%d",&c);
	printf("entrez la valeur de d : \t");
	scanf("%d",&d)
    s=a+b+c+d;
    m=s/4;
	printf("la somme est : %d\n",s);
	printf("la moyenne est : %.2f\n",m);


		return 0;
}
