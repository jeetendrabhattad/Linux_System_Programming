#include <stdio.h>

int main()
{
	if(fork() == 0)
	{
		while(1)
		{
			printf("Child Daemon\n");
			sleep(2);
		}
	}
	printf("Parent Exiting....\n");
}
