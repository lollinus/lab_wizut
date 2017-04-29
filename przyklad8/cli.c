#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <fcntl.h>

#define MAX_BUF 1024

int main(int argc, char *argv[])
{
	int fd;
	int ret;
	struct sockaddr_un sa;
	socklen_t addr_size;
	char buf[80];
	int res;

	memset(buf, 0, sizeof(buf));
	memset(&sa, 0, sizeof(sa));

	fd = socket(AF_UNIX, SOCK_STREAM, 0);

	sa.sun_family = AF_UNIX;
	strncpy(sa.sun_path, "/tmp/socket", sizeof("/tmp/socket"));

	addr_size = sizeof(sa);
	fd = connect(fd, (struct sockaddr *)&sa, addr_size);
	if (fd == -1) {
		perror("connect");
		exit(1);
	}

	printf("Going to read from socket\n");
	res = read(fd, buf, sizeof(buf));

	printf("Received: %s\n", buf);

	close(fd);

	return (0);
}
