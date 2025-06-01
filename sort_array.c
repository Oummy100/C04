#include <stdio.h>

int main() {
    int n;

    // 1. Lire la taille du tableau
    scanf("%d", &n);

    int array[n];

    // 2. Lire les éléments
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 3. Tri à bulles
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Échanger array[j] et array[j+1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // 4. Afficher le tableau trié
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
