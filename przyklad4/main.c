/* -*- mode: c; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: t; coding: iso-latin-1-unix; -*- vim: set ts=4 sts=4 sw=4 syntax=c noet: */
/* Drugi przyklad programu jezyka C */

/* Do kompilacji uzyj polecen
    $ gcc -c -o sample_lib.o sample_lib.c
    $ gcc -c -o main.o main.c sample_lib.o
	$ gcc -o main sample_lib.o main.o

   Do Uruchomienia
    $ ./main arg1 arg2 ble bla
*/

#include "sample_lib.h"

/* Alternatywna sygnatura funkcji glownej
   int - typ zwracany - zawsze taki
   main - nazwa funkcji poczatkowej - zawsze taka
   int argc - argument typu calkowitego oznaczajacy rozmiar tablicy argv
   char *argv[] - tablica ciagow znakow zawierajaca argumenty pozycyjne
   przekazane do programu.
*/
int main(int argc, char *argv[])
{

	sample_function(argc, argv);

	return 0;
}
