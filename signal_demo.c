#include <signal.h>
#include <stdio.h>

void catcher(int signum)
{
	printf("Signal %d caught\n", signum);
}

void foo()
{
	printf("In Foo\n");
	while(1)
	{
		printf("Sleeping for 10\n");
		sleep(10);
	}
}

int main()
{
	signal(SIGINT, catcher);
	foo();

	return 0;
}
