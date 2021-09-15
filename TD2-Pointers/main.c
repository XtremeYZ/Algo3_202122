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

int main(int argc, char **argv)
{
	printf("TD 2 Pointers\n");
	twoVars();
	return 0;
}
