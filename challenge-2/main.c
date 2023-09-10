// TODO  : Défi 2 : Refaire le défi 1 avec différents types
//  d'allocation de mémoire (heap, RtlFillMemory , VirtualAlloc).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // allocation sur la heap, utilisation d'un pointeur

    void *ptr = malloc(sizeof(void));

    // de ce que je comprends RtlFillMemory et VirtialAlloc sont
    // des fonctions utilisees en windows pour allouer de la memoire
    // malheureusement je developpe sur macOS...
    // on se contentera de malloc

    printf("Exemple avec malloc\n");
    printf("L'adresse memoire vers ou pointe le pointeur est: %p\n", ptr);

    void *ptr2 = calloc(1, sizeof(void));

    printf("Exemple avec calloc\n");
    printf("L'adresse memoire vers ou pointe le pointeur est: %p\n", ptr2);

    return 0;
}