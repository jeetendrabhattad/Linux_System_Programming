#include <stdio.h>

int main()
{
	int i = 10;

	if(vfork()==0)
	{
		i = 20;
		printf("%d child\n", i);
		exit(0);
	}
	printf("%d parent\n", i);
}
