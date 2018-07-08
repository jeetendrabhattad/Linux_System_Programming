#include <stdio.h>

int main()
{
	int id = fork();
	if(id == 0)
	{
//		while(1)
		{
			printf("Child %d\n",id);
//			sleep(1);
		}
	}
	else
	{
		printf("Parent %d\n",id);
//		exit(0);
	}
//	printf("\n Parent No More");
}
