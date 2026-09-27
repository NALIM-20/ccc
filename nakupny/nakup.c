#include <stdio.h>

typedef struct {
    char nazov[50];
    float cena;
    int pocet;
} Produkt;

int main() {
    Produkt produkty[3];
    float celkova_cena = 0.0;

    // Načítanie údajov o 3 produktoch
    printf("=== ZADANIE NÁKUPU ===\n");
    for (int i = 0; i < 3; i++) {
        printf("\nProdukt %d:\n", i + 1);
        printf("Názov: ");
        scanf("%49s", produkty[i].nazov);
        
        printf("Cena za kus (€): ");
        scanf("%f", &produkty[i].cena);
        
        printf("Počet kusov: ");
        scanf("%d", &produkty[i].pocet);
    }

    // Výpis jednotlivých položiek a výpočet celkovej ceny
    printf("\n=========================\n");
    printf("    Položky nákupu:      \n");
    printf("=========================\n");

    for (int i = 0; i < 3; i++) {
        float cena_spolu = produkty[i].cena * produkty[i].pocet;
        celkova_cena += cena_spolu;
        
        printf("%d. %s - %d ks x %.2f € = %.2f €\n", 
               i + 1, produkty[i].nazov, produkty[i].pocet, produkty[i].cena, cena_spolu);
    }

    printf("-------------------------\n");
    printf("Celková cena: %.2f €\n", celkova_cena);

    // Bonus [1 bod]: Zľava 10 % pri nákupe nad 50 €
    if (celkova_cena > 50.0) {
        float zlava = celkova_cena * 0.10;
        float cena_po_zlave = celkova_cena - zlava;
        
        printf("Zľava (10 %%): -%.2f €\n", zlava);
        printf("Výsledná cena po zľave: %.2f €\n", cena_po_zlave);
    }

    return 0;
}