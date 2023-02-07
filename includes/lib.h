/*
** EPITECH PROJECT, 2022
** B_CPE_110_LYN_1_1_bsbsq_mathis_rapaccioli
** File description:
** TODO: add description
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdarg.h>
    #include <stdlib.h>

//  lib_functions
    void my_putchar(char c);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_error_output(char const *str);
    int	my_getnbr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strcat(char *dest, char *src);
    char *my_strncat(char *dest, char *src, int nb);
    char *my_revstr(char *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2);
    char **my_str_to_word_array(char const *str);
    int my_str_is_num(const char *str);
    int my_isneg(int nb);
    void my_swap(int *a, int *b);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmeme(char const *str);
    char *my_evil_str(char *str);
    int my_str_isupper(char const *str);
    int my_show_word_array(char *const *tab);

    //  my_printf
    int my_printf(const char *str, ...);

#endif //MY_H_
