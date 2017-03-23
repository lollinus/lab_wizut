/* -*- mode: c; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: t; coding: iso-latin-1-unix; -*- vim: set ts=4 sts=4 sw=4 syntax=c noet: */
/* Drugi przyklad programu jezyka C */

/* Do kompilacji uzyj polecienia
   $ gcc -o main main.c

   Do Uruchomienia
   $ ./main arg1 arg2 ble bla
*/

#include <stdio.h>


/* Alternatywna sygnatura funkcji glownej
   int - typ zwracany - zawsze taki
   main - nazwa funkcji poczatkowej - zawsze taka
   int argc - argument typu calkowitego oznaczajacy rozmiar tablicy argv
   char *argv[] - tablica ciagow znakow zawierajaca argumenty pozycyjne
   przekazane do programu.
*/
int main(int argc, char *argv[])
{
	/* wypisujemy argumenty pozycyjne. Kazdy w osobnej linii.
	   Pierwszy argument zawiera nazwe programu tak jak jest wywolany.
	 */
	int i;
	for (i=0; i<argc; i++)
	{
		puts(argv[i]);
	}

	return 0;
}
