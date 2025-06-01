#include <stdio.h>

int main() {
    int n;

    // 1. Lire la taille du tableau
    scanf("%d", &n);

    int array[n];  // Déclaration du tableau

    // 2. Lire les éléments
    printf("Entrez les %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 3. Trouver le maximum
    int max = array[0]; // On commence avec le premier élément
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // 4. Afficher le maximum
    printf("Le maximum est : %d\n", max);

    return 0;
}
