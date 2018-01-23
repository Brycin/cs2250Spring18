#include <stdio.h>

int main()

{
	//Take two integers from the user
	//Display their sum
	//Display the difference
	//Display the product

	int num1;
	int num2;
	int sum;
	int diff;
	int prod;
	int div;

	printf("Select an integer:\n");
	scanf("%d", &num1);
	printf("You selected: %d\n", num1);
	printf("Select another integer:\n");
	scanf("%d", &num2);
	printf("You selected: %d\n", num2);
	sum = num1 + num2;
	diff = num1 - num2;
	div = num1 / num2;
	prod = num1 * num2;
	printf("The sum is %d\n", sum);
	printf("The difference is %d\n", diff);
	printf("The product is %d\n", prod);
	printf("The division is %d\n", div);
	//Division only gives you the quocient (whole number)
	//To get the remainder you must use % the remainder is also called the modulus
	printf("The remainder is %d\n", num1 % num2);
 
	return 0;
}
