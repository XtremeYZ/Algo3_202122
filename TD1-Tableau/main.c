#include <stdio.h>
# define N 10

typedef int ARRAY[N];

void initTableau(/*int tab[]*/ARRAY tab){

	for(int i=0; i < N; i++){
			tab[i] = 0;
	}
	
}

void saisieTableau(/*int tab[]*/ARRAY tab){

	for(int i=0; i < N; i++){
			printf("Enter value for position %d\n",i);
			//scanf("%d", &tab[i]);
			//Same with pointer
			scanf("%d", tab+i);
	
	}
	
}

void afficherTableau(/*int tab[]*/ARRAY tab){
	for(int i=0; i< N; i++){
		//printf("at pos %d, value %d\n",i, tab[i]);
		//the same but With pointers
		printf("at pos %d, value %d\n",i, *(tab+i));
		
		}
	}


int main(int argc, char **argv)
{
	printf("TD1- Tableau \n");
	
	//printf("Value of N: %d", N);
	
	int mytab[N];
	initTableau(mytab);
	//saisieTableau(mytab);
	//afficherTableau(mytab);
	
	ARRAY mynewArray;
	saisieTableau(mynewArray);
	afficherTableau(mynewArray);
	
	return 0;
}
