/*
** EPITECH PROJECT, 2022
** my_str_islower
** File description:
** task 14, pool day 6
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] >= 97 && str[i] <= 122)) {
            return 0;
        }
        i++;
    }
    return 1;
}