#include <stdio.h>

void twoVars(){
	
		int a;
		a = 10;
		
		int b = 12;
		int c = 17737373;
		
		char charac1 = 'd';
		char charac2 = 'u';
		
		printf("\nvalue of 'a' is %d", a);
		printf("\nvalue of 'b' is %d", b);
	
		printf("\n Address of 'a' is %d", &a);
		printf("\n Address of  'b' is %d", &b);
		printf("\n Address of  'c' is %d", &c);
		
		printf("\n Address of  'char1' is %d", &charac1);
		printf("\n Address of  'char2' is %d", &charac2);
		
		
		printf("\nsize of type int %d",sizeof(int));
	   printf("\nsize of type char %d",sizeof(char));
	
}

void varAndPointers(){
	
	int a = 10;
	
	printf("\nvalue of 'a' is %d", a);
	
	printf("\n Address of 'a' is %d", &a);
	
	int b = 6;
	
	printf("\nvalue of 'b' is %d", b);
	
	printf("\n Address of  'b' is %d", &b);
	
	int *mypointer;
	
	printf("\n Address of  'mypointer' is %d", &mypointer);
	
	//Points to address of 'a'
	mypointer = &a;
	
	printf("\nValue of 'mypointer' is %d", mypointer);
	
	///Get the value pointed
	printf("\nValue inside the address \nhosted by 'mypointer' (*mypointer) is %d", *mypointer);
	
	//Change the value of another variable
	
	*mypointer = 40000;
	printf("\n After *mypointer, value of 'a' is %d", a);
	
	
	// change the value of B only with my pointer (targets to 'a')
	
	//Changing 4 bytes after la valuer du pointer
	*(mypointer - 1)  =  55; // + sizeof(int)
	printf("\nchanging value %d", mypointer - 1);
	printf("\nValue of 'b' after pointer modification %d",b );
	//Changing another place...
	*(mypointer + 200)  =  155;
	
		
}

int main(int argc, char **argv)
{
	printf("TD 2 Pointers\n");
	//twoVars();
	varAndPointers();
	return 0;
}
