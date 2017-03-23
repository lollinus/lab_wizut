# Laboratorium Wstep do programowania C w systemach wbudowanych  #
	
## Pierwszy

Do kompilacji uzyj polecenia

    $ gcc -o main main.c

Do Uruchomienia

    $ ./main

Skompiluj na maszyne docelowa

    $  ~/embedded_c/buildroot-build/host/usr/bin/i686-buildroot-linux-uclibc-gcc -o main_cross main.c

Sprobuj uruchomic

    user@userSP:~/project/lab_wizut/przyklad1$ ./main_cross
    -bash: ./main_cross: No such file or directory
    
Uruchomienie nie powiodlo sie poniewaz plik zostal skompilowany na inna architekture niz architektura systemu hosta.

Mozna to sprawdzic za pomoca polecenia `file`

    $ file main
    main: ELF 64-bit LSB executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 2.6.32, BuildID[sha1]=738371c9c10445d4890dded5b7c3ecc8785f4087, not stripped
    $ file main_cross
    main_cross: ELF 32-bit LSB executable, Intel 80386, version 1 (SYSV), dynamically linked, interpreter /lib/ld-uClibc.so.0, not stripped

Pierwszy program jest skompilowany na maszyne na ktorej pracujemy. Jak widac jest to architektura 64-bit x86-64, a uzyta wersja dynamicznego linkera do `/lib64/ld-linux-x86-64.so.2`.
Drugi program jest skompilowany na maszyne docelowa przy uzyciu toolchaina zbudowanego wraz z obrazami buildroota. Architektura to 32-bit Intel 80386, dynamiczny linker to `/lib/ld-uClibc.so.0` lub inny taki jak wybrany w konfiguracji buildroota.

## Drugi

Przyklad alternatywnej skladni funkcji main. 

Do kompilacji uzyj polecienia

    $ gcc -o main main.c

Do Uruchomienia

    $ ./main arg1 arg2 ble bla

## Trzeci
   
Przyklad podzialu programu na moduly.

Do kompilacji uzyj polecen

    $ gcc -c -o sample_lib.o sample_lib.c
    $ gcc -c -o main.o main.c sample_lib.o
	$ gcc -o main sample_lib.o main.o

Do Uruchomienia

    $ ./main arg1 arg2 ble bla

Programy dzieli sie na moduly w celu separacji i logicznego wydzielenia fukcjonalnosci.
W przypadku potrzeby zmiany jakiejs fukcjonalnosci wystarczy skompilowac tylko zmieniony modul a nastepnie skonsolidowac program wynikowy.

* Zadanie: zmodyfikuj funkcje tak aby zwracala sukces(0) kiedy liczba argumentow
  jest wieksza niz 2 i mniejsza niz 5. W przeciwnym wypadku zwroc kod bledu
  (rozne od 0).
  
* Zadanie: dodaj druga funkcje ktora sprawdzi czy argumenty programu zawieraja zadany tekst.
   
        int check_arg(int argc, char *argv[], char *tekst)

## Czwarty

Uzycie make do budowania projektu.

Makefile sklada sie z zestawu regul w formie

    cel: zaleznosci
    	polecenia potrzebne do stworzenia cel

* cel - moze byc oczekiwanym plikiem lub stanem
* zaleznosci - moga byc plikiem lub stanem
* polecenia - lista polecen - jedno w kazdej linii. Przed kazdym poleceniem musi byc jeden lub wiecej znakow TAB.

Makefile zawsze uruchania pierwsza regule w pliku. Jezeli regula ta ma zaleznosci to musza one zostac spelnione przed wykonaniem pierwszej reguly.

Zdanie: zmodyfikuj Makefile tak aby mozliwa byla cross compilacja
