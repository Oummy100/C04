#include <stdio.h>
#include <limits.h> // pour INT_MIN

int main() {
    int n;

    // 1. Lire la taille
    scanf("%d", &n);

    if (n < 2) {
        printf("Il faut au moins deux éléments !\n");
        return 1;
    }

    int array[n];

    // 2. Lire les éléments
    printf("Entrez les %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 3. Initialiser les max
    int max = INT_MIN;
    int second = INT_MIN;

    // 4. Parcourir le tableau
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            second = max;
            max = array[i];
        } else if (array[i] > second && array[i] < max) {
            second = array[i];
        }
    }

    // 5. Vérification
    if (second == INT_MIN) {
        printf("Il n’y a pas de deuxième plus grand (valeurs identiques ?)\n");
    } else {
        printf("Le deuxième plus grand nombre est : %d\n", second);
    }

    return 0;
}
