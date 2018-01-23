#include <stdio.h>

int main()
{
	int userAge; // declaring an int variable.
	int votingAge = 18; // declaring and initializing.
	
	printf("userAge, address:%p value:%d\n", &userAge, userAge);
	printf("votingAge, address:%p value:%d\n", &votingAge, votingAge);

	return 0;
}
