#include<stdlib.c>

#define SIZE 	1000

#define TRUE 	1
#define FALSE 	0

int main()
{
	char sieve[SIZE];
	char *sp;
	int number;

	for(sp = sieve; sp < &sieve[SIZE]; )		
		*sp++ = TRUE;
	
	for(number = 3 ; ; number += 2)
	{

	}
}
