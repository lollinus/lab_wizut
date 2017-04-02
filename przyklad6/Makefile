

all: srv cli


srv: srv.c
	$(CC) -o $@ $<

cli: cli.c
	$(CC) -o $@ $<

clean:
	-rm -rf *.o srv cli
