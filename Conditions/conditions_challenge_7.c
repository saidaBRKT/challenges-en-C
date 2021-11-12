
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float note;

    printf("entrez une note entre 0 et 20 : ");
    scanf("%f", &note);

    if(note >0 && note <10)
    {
        printf("non admis\n");

    }
    else if((note >10) && (note <=12)  )
    {
        printf("Passable\n");

    }
     else if((note >12) && (note <=14))
    {
        printf("Assez bien\n");

    }
    else if((note >14)  && (note <=16))
    {
        printf("Bien\n");
    }
    else if((note >16)  && (note <=20))
    {
        printf("Tres bien\n");
    }
	else
	printf("note incorrect\n");

    return 0;
}
