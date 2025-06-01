#include <stdio.h>

int main() {
    int n;

    // 1. Lire la taille du tableau
    scanf("%d", &n);

    int array[n];
    int somme = 0;

    // 2. Lire les éléments
    printf("Entrez les %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        somme += array[i];  // 3. Ajouter chaque élément à la somme
    }

    // 4. Calcul de la moyenne
    float moyenne = (float)somme / n;

    // 5. Afficher la moyenne
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}
