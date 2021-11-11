#include<stdio.h>
#include<stdlib.h>



int main()
{

	float temp;
    debut:
	printf("\nentrez la temperature: \t");
	scanf("%f",&temp);
	if(temp<0)
	printf("tres froid");
	else if(temp>0 && temp<18)
	printf("froid");
	else if(temp>18 && temp<30)
	printf("chaud");
	else
	printf("tres chaud");
	goto debut;
		return 0;
}
