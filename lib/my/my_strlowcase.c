/*
** EPITECH PROJECT, 2022
** my_strlowcase
** File description:
** task 09, pool day 6 - put string to lowercase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}
