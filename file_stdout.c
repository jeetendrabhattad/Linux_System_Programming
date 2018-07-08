#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd = open("out.txt", O_CREAT | O_TRUNC | O_RDWR, 0666);
	
	close(1);
	dup(fd);
	fprintf(stdout, "JAY SHRI RAM");
	fprintf(stdout, "JAY SHRI RAM");
	fflush(stdout);
	close(1);
	fprintf(stdout, "JAY SHRI RAM");
	fprintf(stdout, "JAY SHRI RAM");
	fflush(stdout);
	close(fd);
}
