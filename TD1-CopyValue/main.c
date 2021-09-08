#include <stdio.h>

void increment(int valueToIncrement){
	printf("\nAddress of variable valueToIncrement %d", &valueToIncrement);
	printf("\nInside Increment: \n--> Value received by Increment %d",valueToIncrement);
   valueToIncrement = valueToIncrement + 1;
	printf("\nInside Increment: \n--> Value after increment %d",valueToIncrement);
   
   
}

int main(int argc, char **argv)
{
	int value1;
	printf("\nCopy-Value-Problematic \n");
	printf("\nAddress of variable value1 %d", &value1);
	

	value1 = 35;
	printf("\nmain--Value 1 before increment: %d", value1);
	
	increment(value1);
	
	printf("\nmail--Value 1 After increment: %d", value1);
	
	
	
	return 0;
}
