#include <stdio.h>
#define N 5

int main(int argc, char **argv)
{
	printf("TD Tableau Pointers\n");
	
	//Declaration
	int myTab[N];
	//Init
	for (int i = 0; i < N; i++){
		myTab[i] = 100 * (i+1); 
	}
	
	//Display
	for (int i = 0; i < N; i++){
		//	printf("myTab[%d]=%d\n", i, myTab[i]);
	}
	
	printf("myTab[%d]=%d\n", 1, myTab[1]);
	printf("*(myTab+%d)=%d\n", 1, *(myTab+1));

	printf("Address of first element (init of array) w/pointers:\n %d\n", myTab);
	printf("Address of second element w/pointers:\n %d\n", myTab+1);
	printf("Address of third element w/pointers:\n %d\n", myTab+2);
	
	int * p;
	p = myTab;
	printf("--With additional pointer p\n---");
	printf("Address of first element (init of array) w/pointers:\n %d\n", p);
	printf("Address of second element w/pointers:\n %d\n", p+1);
	printf("Address of third element w/pointers:\n %d\n", p+2);
	
	printf("Address of first element (init of array) w/index:\n %d\n", &myTab[0]);
	printf("Address of second element w/index:\n %d\n", &myTab[1]);
	printf("Address of third element w/index:\n %d\n", &myTab[2]);
	
	printf("\n----Now the values----\n");
	printf("Value of first element (init of array) w/pointers:\n %d\n", *(myTab));
	printf("Value of second element w/pointers:\n %d\n", *(myTab+1)) ;
	printf("Value of third element w/pointers:\n %d\n", *(myTab+2));
	
	printf("--With additional pointer p\n---");
	printf("Value of first element (init of array) w/pointers:\n %d\n", *p);
	printf("Value of second element w/pointers:\n %d\n", *(p+1));
	printf("Value of third element w/pointers:\n %d\n", *(p+2));
	
	printf("Value of first element (init of array) w/index:\n %d\n", myTab[0]);
	printf("Value of second element w/index:\n %d\n", myTab[1]);
	printf("Value of third element w/index:\n %d\n", myTab[2]);
	
	return 0;
}
