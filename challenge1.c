#include<stdio.h>
#include<stdlib.h>



int main()
{
	char nom[40],prenom[40],sexe;
	int age,tel;

	printf("entrez votre nom :\t");
	scanf("%s",&nom);
	printf("\nentrez votre prenom :\t");
	scanf("%s",&prenom);
	printf("\nentrez votre age :\t");
	scanf("%d",&age);
	printf("\nentrez votre sexe :(taper F ou H)\t");
	scanf( " %c",&sexe);
	printf("\nentrez votre telephone :\t");
	scanf("%d",&tel);

	printf("\n\n\t\t\t*****************  vos infos sont : *****************");

	printf("\n\n\n\t\t\t\t\t   nom : %s   \n\t\t\t\t\t   prenom : %s   \n\t\t\t\t\t   Age : %d   \n\t\t\t\t\t   sexe: %c   \n\t\t\t\t\t   telephone : %d  \n",nom,prenom,age,sexe,tel);

	printf("\n\n\n\t\t\t****************************************************");

	return 0;
}
