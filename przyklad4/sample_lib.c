/* -*- mode: c; tab-width: 8; c-basic-offset: 8; indent-tabs-mode: t; coding: iso-latin-1-unix; -*- vim: set ts=8 sts=8 sw=8 syntax=c noet: */

#include "sample_lib.h"

#include <stdio.h>

/*
  Definiujemy funkcje zadeklarowane w pliku naglowkowym.

  Zadanie: zmodyfikuj funkcje tak aby zwracala sukces(0) kiedy liczba argumentow
  jest wieksza niz 2 i mniejsza niz 5. W przeciwnym wypadku zwroc kod bledu
  (rozne od 0).

 */
int sample_function(int argc, char *argv[])
{
	/* wypisujemy argumenty pozycyjne. Kazdy w osobnej linii.
	   Pierwszy argument zawiera nazwe programu tak jak jest wywolany.
	*/
	int i;
	for (i=0; i<argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return 0;
}

/*
   Zadanie: dodaj druga funkcje ktora sprawdzi czy argumenty programu zawieraja
   zadany tekst.
   int check_arg(int argc, char *argv[], char *tekst)
*/
