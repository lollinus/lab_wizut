/* Pierwszy przyklad programu jezyka C */

/* Do kompilacji uzyj polecienia
   $ gcc -o main main.c

   Do Uruchomienia
   $ ./main
*/

/* Pliki naglowkowe zawieraja deklaracje fukcji ktorych uzywa sie w programie */
#include <stdio.h>

/* sygnatura funkcji glownej
   int - typ zwracany - zawsze taki
   main - nazwa funkcji poczatkowej - zawsze taka
   void - typ przyjmowany przez fukcje. Void oznacza brak parametrow
*/
int main(void)
{
	puts("Pierwszy program");

	/* Jezeli program zakonczyl sie sukcesem to zwyczajowo powinien zwrocic
	   zero */
	/* W przeciwnym wypadku powinien zwrocic kod bledu. (Kod bledu moze byc
	 * dowolna wartoscia typu calkowitego w programach produkcyjnych
	 * definiuje sie kody ktore sa opisane w podreczniku) ble ble ble. */
	return 0;
}
