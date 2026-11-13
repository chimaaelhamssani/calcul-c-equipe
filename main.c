
#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

float moyenne(int a, int b) {
    return (float)(a + b) / 2;
}

int main() {

    printf("Message depuis Chaimaa\n");
    printf("Message depuis feature/message\n");
    printf("Produit = %d\n", produit(4, 5));
    printf("Moyenne = %.2f\n", moyenne(4, 5));

    return 0;
}

