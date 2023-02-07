/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** task 04, pool day 5
*/

int my_compute_power_rec(int nb, int p)
{
    int temp = nb;
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    temp = nb * my_compute_power_rec(nb, p - 1);
    return temp;
}
