# przyklad uzycia prostego Makefile do ulatwienia i przyspieszenia procesu kompilacji

# Makefile sklada sie z zestawu regul w formie
# cel: zaleznosci
#      polecenia potrzebne do stworzenia cel
#
# cel - moze byc oczekiwanym plikiem lub stanem
# zaleznosci - moga byc plikiem lub stanem
# polecenia - lista polecen - jedno w kazdej linii. Przed kazdym poleceniem musi byc jeden lub wiecej znakow TAB.

# pierwsza regula w pliku Makefile zostanie uruchomiona. Jezeli ma jakies zaleznosci to zostana one spelnione jako pierwsze.
all: main

# zbuduj plik sample_lib.o z pliku sample_lib.c
# komenda gcc zostanie uruchomiona jezeli plik sample_lib.o nie istnieje lub jest starszy niz plik sample_lib.c
sample_lib.o: sample_lib.c
	gcc -c -fpic -Werror -Wall -o sample_lib.o sample_lib.c

libsample_lib.so: sample_lib.o
	gcc -shared -o libsample_lib.so sample_lib.o

main.o: main.c
	gcc -c -o main.o main.c

# zbuduj plik main wykozystujac pliki main.o i sample_lib.o
main: main.o libsample_lib.so
	gcc -L/home/user/project/lab_wizut/przyklad4 -Wall -o main main.o -lsample_lib

# Zdanie: zmodyfikuj Makefile tak aby mozliwa byla cross compilacja
clean:
	-rm -rf *.o *.so
