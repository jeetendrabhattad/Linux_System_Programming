#include <stdio.h>

int main()
{
	if(fork() == 0)
	{
		execl("/usr/bin/firefox", "/usr/bin/firefox", NULL, NULL, 0);
		printf("Jay Shri Ram\n");
		sleep(1);
	}
	printf("\n Parent Waiting");
	wait(0);
}
