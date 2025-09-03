#include <stdio.h>

int main() {
    int n, i, pair = 2;

    printf("Entrez le nombre de termes n: ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont : ", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", pair);
        pair += 2;
    }

    return 0;
}
