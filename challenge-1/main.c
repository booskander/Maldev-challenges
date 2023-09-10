#include <stdio.h>
#include <stdlib.h>
/*TODO: Défi 1 : Allouer de la mémoire à une variable et récupérer l'adresse,
explorer la mémoire dans votre compilateur pour observer votre variable.
 ( malloc)
 */

int main()
{
    printf("Exemple avec l'utilisation d'un pointeur\n");
    int *ptr = malloc(1 * sizeof(int));
    printf("Adresse memoire: %p\n", ptr);

    printf("Exemple en utilisant simplement une variable\n");
    int var = 5;
    printf("Adresse memoire: %p\n", &var);

    return 0;
}
