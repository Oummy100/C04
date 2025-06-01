#include <stdio.h>

int main() {
    int n;

    // 1. Taille du tableau
    printf("Entrez le nombre d’éléments : ");
    scanf("%d", &n);

    int original[n];

    // 2. Lire les éléments
    printf("Entrez les %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    int unique[n]; // Tableau pour les valeurs uniques
    int unique_count = 0;

    // 3. Supprimer les doublons
    for (int i = 0; i < n; i++) {
        int existe = 0;
        // Vérifie si original[i] est déjà dans unique[]
        for (int j = 0; j < unique_count; j++) {
            if (original[i] == unique[j]) {
                existe = 1; // trouvé = doublon
                break;
            }
        }

        // Si ce n’est pas un doublon, on l’ajoute au tableau unique
        if (!existe) {
            unique[unique_count] = original[i];
            unique_count++;
        }
    }

    // 4. Afficher le tableau sans doublons
    printf("Après suppression des doublons : ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
