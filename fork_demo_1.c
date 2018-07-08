#include <stdio.h>

int main()
{
	int i = 0;
	for( i = 0 ; i < 2 ; i++ )
	{
		fork();
		printf("I am a process at i = %d\n", i);
	}

	if(fork() == 0)
		printf("This is a child process\n");
}
