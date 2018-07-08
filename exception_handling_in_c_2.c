#include <stdio.h>
#include <setjmp.h>

jmp_buf jmpbuffer;

int main()
{
	int i = 100;

	if(setjmp(jmpbuffer) == 0)
		printf("Saving Context i %d\n", i);
	else
	{
		printf("Restored Context i = %d\n", i);
	}
	i++;
	if(i == 200)
		exit(0);
	longjmp(jmpbuffer, 1);
}
