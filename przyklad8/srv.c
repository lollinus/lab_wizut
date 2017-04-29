#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	int cfd;
	int ret;
	struct sockaddr_un sa;
	struct sockaddr_un cli_a;
	socklen_t cli_addr_size;
	size_t nwrite;

	fd = socket(AF_UNIX, SOCK_STREAM, 0);

	sa.sun_family = AF_UNIX;
	strncpy(sa.sun_path, "/tmp/socket", sizeof("/tmp/socket"));
	ret = bind(fd, (struct sockaddr *)&sa, sizeof(sa));

	if (ret == -1) {
		perror("bind");
		exit(1);
	}

	if (listen(fd, 50) == -1) {
		perror("listen");
		exit(1);
	}

	cli_addr_size = sizeof(cli_a);
	cfd = accept(fd, (struct sockaddr *)&cli_a, &cli_addr_size);
	if (cfd == -1) {
		perror("accept");
		exit(1);
	}

	nwrite = write(cfd, "Hi", sizeof("Hi"));
	printf("written nwrite=%d\n", nwrite);
	while (nwrite < sizeof("Hi")) {
		nwrite += write(cfd, "Hi", sizeof("Hi"));
	}
	printf("written nwrite=%d\n", nwrite);

	sleep(10);

	close(cfd);

	close(fd);
	return (0);
}
