#include <stdio.h>

int main() {
    int vyska;

    printf("Zadaj cislo: ");
    scanf("%d", &vyska);

    for (int i = 1; i <= vyska; i++) {
        for (int j = 0; j < i; j++) {
            printf("x");
        }
        printf("\n");
    }

    return 0;
}