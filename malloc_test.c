#include <stdio.h>
#include <malloc.h>
int main()
{
	int* ptr = malloc(20*sizeof(int));
	printf("\n Actual allocated :- %d", malloc_usable_size(ptr));
	malloc_stats();
	return 0;
}
