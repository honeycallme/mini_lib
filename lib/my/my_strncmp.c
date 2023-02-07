/*
** EPITECH PROJECT, 2022
** my_strncmp
** File description:
** task 07, pool day 6 - strncmp function
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' || s1[i] != n) {
        if (s1[i] < s2[i]){
            return -1;
        } else {
            return 1;
        }
        i++;
    }
    return 0;
}
