/* -*- mode: c; tab-width: 8; c-basic-offset: 8; indent-tabs-mode: t; coding: iso-latin-1-unix; -*- vim: set ts=8 sts=8 sw=8 syntax=c noet: */

/* W plikach naglowkowych uzywamy tzw. "include guard".
   Jest to niezbedne aby definicja preprocesora ktora powoduje, ze plik
   zostanie dolaczony tylko przy pierwszym uzyciu #include.

   Potrzebujemy takiego zabezpieczenia jezeli plik definiuje makra lub typy
   funkcji moga sie zmienic na podstawie zewnetrznych definicji preprocesora.
*/

#ifndef _SAMPLE_LIB_H_
#define _SAMPLE_LIB_H_

int sample_function(int argc, char *argv[]);

#endif /* _SAMPLE_LIB_H_ */
