#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool premier(int n)
{
	int i,v=0;
	
	 for(i = 1; i <= n; i++){
        if(n%i == 0){
        v++;
        }
    }
    if(v == 2){
        return true;
    }
    else{
        return false;
    }
	
}

int main()
{
  int nbr;
  bool etat;
  printf("entrez un nombre :\n");
  scanf("%d",&nbr);
  etat=premier(nbr);
  if(etat==true)
  printf("le nombre %d est premier .",nbr);
  else
   printf("le nombre %d n est pas premier .",nbr);
 
	return 0;
}
