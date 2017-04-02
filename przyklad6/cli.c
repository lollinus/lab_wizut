#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

#define MAX_BUF 1024

int main(int argc, char *argv[])
{
	int fd;
	char *myfifo = "/tmp/myfifo";
	char buf[MAX_BUF];

	fd = open(myfifo, O_RDONLY);

	read(fd, buf, MAX_BUF);
	printf("Received: %s\n", buf);
	close(fd);

	return (0);
}
