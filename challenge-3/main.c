#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct NumberArray
{
    int size;
    int capacity;
    int *buffer;
};

void resize(struct NumberArray *array)
{
    array->capacity = array->capacity * 2;

    int *tempBuffer = malloc(array->capacity * sizeof(int));

    for (int i = 0; i < array->size; i++)
    {
        tempBuffer[i] = array->buffer[i];
    }

    free(array->buffer);
    array->buffer = tempBuffer;
}

void insert(int element, struct NumberArray *array)
{
    if (array->size == array->capacity)
    {
        resize(array);
    }

    array->buffer[array->size] = element;
    array->size++;
}

struct NumberArray *__init__array()
{
    struct NumberArray *array = malloc(sizeof(struct NumberArray));

    array->size = 0;
    array->capacity = 5;
    array->buffer = malloc(array->capacity * sizeof(int));

    return array;
}

void destroyArray(struct NumberArray *array)
{
    free(array->buffer);
    free(array);
}

int charToInt(char character)
{
    return character - '0';
}

int main()
{
    printf("Veuillez entrer 5 chiffres successivement\nEcrivez 'e' pour terminer le programme\n");

    struct NumberArray *array = __init__array();

    char entry;
    while (1)
    {
        printf("Entrez le %de chiffre:\n", array->size + 1);
        scanf(" %c", &entry); // Use "%c" to read a single character

        if (entry == 'e')
        {
            printf("fin du programme\n");
            break;
        }
        else
        {
            int number = charToInt(entry);
            insert(number, array);
        }

        while ((getchar()) != '\n')
            ;
    }

    printf("Les chiffres entres sont: ");
    for (int i = 0; i < array->size; i++)
    {
        printf("%d ", array->buffer[i]);
    }
    printf("\n");

    destroyArray(array);

    return 0;
}
