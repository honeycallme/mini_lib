/*
** EPITECH PROJECT, 2022
** my_find_prime_sup
** File description:
** task 07, pool day 5
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb < -2147483648 || nb > 2147483647) {
        return (0);
    }
    while (!(my_is_prime(nb))) {
        nb += 1;
    }
    return nb;
}
