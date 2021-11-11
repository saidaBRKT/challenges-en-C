#include<stdio.h>
#include<stdlib.h>




int main()
{
    const float Pi=3.14;
	int R;
	float c;

	printf("entrez le rayon : \t");
	scanf("%d",&R);
	c= 2*Pi*R;
	printf("la circonference est : %.2f\n",c);

		return 0;
}
