/*
** EPITECH PROJECT, 2022
** my_str_isprintable
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] >= 32 && str[i] <= 126)) {
            return 0;
        }
        i++;
    }
    return 1;
}
