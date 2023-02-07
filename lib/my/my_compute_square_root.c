/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** task 05, pool day 5
*/

int my_compute_square_root(int nb)
{
    int index = 0;

    if (nb < 1)
        return 0;
    while (index * index != nb) {
        index = index + 1;
        if (index > nb)
            return 0;
    }
    return index;
}
