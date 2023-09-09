#include <stdio.h>
#include <stdlib.h>
/*TODO: Défi 1 : Allouer de la mémoire à une variable et récupérer l'adresse,
explorer la mémoire dans votre compilateur pour observer votre variable.
 ( malloc)
 */

int main()
{
    int *variable = malloc(1 * sizeof(int));
    return 0;
}
