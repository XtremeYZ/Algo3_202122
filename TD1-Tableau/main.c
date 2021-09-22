#include <stdio.h>
# define N 10

void saisieTableau(int tab[]){

	for(int i=0; i < N; i++){
			tab[i] = 45;
	}
	
}

void afficherTableau(int tab[]){
	for(int i=0; i< N; i++){
		printf("at position %d, value %d\n",i, tab[i]);
		}
	}


int main(int argc, char **argv)
{
	printf("TD1- Tableau \n");
	
	//printf("Value of N: %d", N);
	
	int mytab[N];
	
	saisieTableau(mytab);
	
	afficherTableau(mytab);
	
	return 0;
}
