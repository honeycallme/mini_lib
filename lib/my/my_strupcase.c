/*
** EPITECH PROJECT, 2022
** my_strupcase
** File description:
** task 08, pool day 6 - put text in uppercase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    return str;
}
