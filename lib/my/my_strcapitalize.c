/*
** EPITECH PROJECT, 2022
** my_strcapitalize
** File description:
** task 10, pool day 6 - Capitalize first leter of each word
*/

static void to_uppercase(char *str, int i);
static void to_lowercase(char *str, int i);
static int type_off(char *str, int i);

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (type_off(str, i - 1)) {
            to_lowercase(str, i);
        } else {
            to_uppercase(str, i);
        }
    }
    return str;
}

int type_off(char *str, int i)
{
    if (i == -1) {
        return 0;
    }
    if ((str[i] >= '0' && str[i] <= '9') \
|| (str[i] >= 'A' && str[i] <= 'Z') \
|| (str[i] >= 'a' && str[i] <= 'z')) {
        return 1;
    }
    return 0;
}

void to_lowercase(char *str, int i)
{
    if (str[i] >= 'A' && str[i] <= 'Z') {
        str[i] += 32;
    }
}

void to_uppercase(char *str, int i)
{
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] -= 32;
    }
}
