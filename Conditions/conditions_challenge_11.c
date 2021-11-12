#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int h1,m1,s1,h2,m2,s2;

	printf("entrez le  instant au format suivant HH:MM:SS :\n");
	scanf("%d:%d:%d",&h1,&m1,&s1);

	printf("entrez le 2eme instant au format suivant HH:MM:SS :\n");
	scanf("%d:%d:%d",&h2,&m2,&s2);

	if(h1<h2)
	{
		printf("Le premier instant vient avant le deuxieme\n");
	}

	else if(h1>h2)
	{
		printf("Le deuxieme instant vient avant le premier\n");
	}

	else if(h1==h2)
	{
	       	if(m1<m2)
        	{
	        	printf("Le premier instant vient avant le deuxieme\n");
        	}

        	else if(m1>m2)
        	{
	        	printf("Le deuxieme instant vient avant le premier\n");
         	}

         	else if(m1==m2)
        	{

	       	          	if(s1<s2)
        	          	{
	                  		printf("Le premier instant vient avant le deuxieme\n");
        	          	}

                  		else if(s1>s2)
                  		{
	                  		printf("Le deuxieme instant vient avant le premier\n");
                   		}

                   		else if(s1==s2)
                  		{
	                	printf("Il s agit du meme instant.\n");
                  		}
        	}

	}

	   return 0;
}
