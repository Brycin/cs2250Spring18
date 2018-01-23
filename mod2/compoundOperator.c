#include <stdio.h>

int main()
{
	int i =0;

	printf("i is %d\n", i);
	i = i + 1;
	printf("i is %d\n", i);
	i += 1; 	//Compound operator meaning  i = current i + 1
	printf("i is %d\n", i);
	i = i - 1; 
	printf("i is %d\n", i);
	i *= 4; 	//Compound operator meaning i = current i * 4
	printf("i is %d\n", i);
	i -= 1; 	//Compound operator meaning i = current i - 1
	printf("i is %d\n", i);

	return 0;

}
