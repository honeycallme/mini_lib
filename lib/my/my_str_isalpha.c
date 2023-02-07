/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** task 12, pool day 6 - my_str_isalpha.c
*/

int my_str_isalpha(char const *str)
{
    int res = 1;
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122))
            res = 1;
        else
            return 0;
        i++;
    }
    return res;
}
