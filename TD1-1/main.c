#include <stdio.h>
/**
 * @brief //+, -, * ou /
 * @param value1
 * @param value2
 * @param symbol
 * @return 
 */
float calcul(float value1, float value2, char symbol){
	printf("\n\nInput values %d, %d, %c", value1, value2, symbol);
	if (symbol == '*'){
		return value1 * value2;
	}
	else
	if (symbol == '+'){
		return value1 + value2;
	}
	else
	if (symbol == '-'){
		return value1 - value2;
	}
	else
	if (symbol == '/'){
		return value1 / value2;
	}
	
	printf("Unknow operator: %d", symbol);
	return -1;
}

int main(int argc, char **argv)
{
	printf("Algo3 2021-22");
	float result;
	
	result = calcul(3, 7, '*');
	//printf("\nthe result is: %f", result);
	
	result = calcul(4, 5, '*');
	//printf("\nthe result is: %f", result);
	
	result = calcul(4, 5, '+');
	//printf("\nthe result is: %f", result);
	
	char symbol;
	
	printf("\nWrite the symbol: ");
	scanf("%c",&symbol);
	
	float v1;
	printf("\nWrite the value 1: ");
	scanf("%f",&v1);
	
	float v2;
	printf("\nWrite the value 2: ");
	scanf("%f",&v2);
	
	printf("\nSymbol written by user %c", symbol);
	result = calcul(v1, v2, symbol);
	
	printf("\nthe result is: %f", result);
	
	
	return 0;
}
