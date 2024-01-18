#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string (s1 + s2), or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, len_s1, len_s2;
    char *concatenated;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
        ;

    for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
        ;

    concatenated = malloc(sizeof(char) * (len_s1 + n + 1));

    if (concatenated == NULL)
        return NULL;

    for (i = 0; i < len_s1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < n && s2[j] != '\0'; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return concatenated;
}
