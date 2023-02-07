/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** task 04, pool day 8
*/

#include <stdlib.h>
int my_strlen(char const *str);

int is_a_word(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
    (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

int number_of_words(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_a_word(str[i]) == 1 && is_a_word(str[i + 1]) == 0)
            count++;
    }
    return count;
}

char **my_str_to_word_array(char const *str)
{
    char **res = malloc(sizeof(char *) * (number_of_words(str) + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        res[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (is_a_word(str[i]) == 0)
            i++;
        k = 0;
        while (is_a_word(str[i]) == 1) {
            res[j][k] = str[i];
            i++;
            k++;
        }
        res[j][k] = '\0';
        j++;
    }
    res[j] = 0;
    return res;
}
