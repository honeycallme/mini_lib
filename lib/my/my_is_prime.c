/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** task06, pool day 5
*/

int my_is_prime(int nb)
{
    int index = 2;

    if (nb < 2)
        return 0;
    while (index <= (nb / 2)) {
        if ((nb % index) == 0)
            return 0;
        index = index + 1;
    }
    return 1;
}
