/*
** EPITECH PROJECT, 2022
** my_sort_int_array
** File description:
** task06, pool day 4
*/

void my_swap(int *a , int *b);

void compare(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap(nb1, nb2);
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            compare(&array[j], &array[j + 1]);
        }
    }
}
