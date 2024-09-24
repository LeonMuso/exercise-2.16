#include <stdio.h>

int main(void) {
    float Pbiglietto;
    float provvigione;
    float prezzofinale;
    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f", &Pbiglietto);
    provvigione = Pbiglietto * 0.15;
    if (provvigione <5)
        provvigione = 5;
    prezzofinale = provvigione + Pbiglietto;
    printf(" aumento della prezzo: %f", provvigione);
    printf(" il prezzo finale del biglietto: %f", prezzofinale);
}
