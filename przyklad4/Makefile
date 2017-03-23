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
	gcc -c -o sample_lib.o sample_lib.c

main.o: main.c
	gcc -c -o main.o main.c

# zbuduj plik main wykozystujac pliki main.o i sample_lib.o
main: main.o sample_lib.o
	gcc -o main main.o sample_lib.o

# Zdanie: zmodyfikuj Makefile tak aby mozliwa byla cross compilacja

