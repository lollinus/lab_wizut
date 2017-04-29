#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	char *myfifo = "/tmp/myfifo";

	mkfifo(myfifo, 0666);

	fd = open(myfifo, O_WRONLY);

	write(fd, "Hi", sizeof("Hi"));

	close(fd);

	unlink(myfifo);
	return (0);
}
