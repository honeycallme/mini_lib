##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makfile for my mini C lib
##

SRC = lib/my/my_strlen.c \
	lib/my/my_putchar.c \
	lib/my/my_put_nbr.c \
	lib/my/my_strcmp.c \
	lib/my/my_strncmp.c \
	lib/my/my_putstr.c \
	lib/my/my_getnbr.c \
	lib/my/my_strcpy.c \
	lib/my/my_strcat.c \
	lib/my/my_strncpy.c \
	lib/my/my_strncat.c \
	lib/my/my_revstr.c \
	lib/my/my_isnum.c \
	lib/my/my_compute_power_rec.c \
	lib/my/my_compute_square_root.c \
	lib/my/my_error_output.c \
	lib/my/my_find_prime_sup.c \
	lib/my/my_is_prime.c \
	lib/my/my_show_word_array.c \
	lib/my/my_showmem.c \
	lib/my/my_showstr.c \
	lib/my/my_sort_int_array.c \
	lib/my/my_str_isalpha.c \
	lib/my/my_str_islower.c \
	lib/my/my_str_isprintable.c \
	lib/my/my_strlowcase.c \
	lib/my/my_strupcase.c \
	lib/my/my_swap.c \
	lib/my/my_str_to_word_array.c \
	lib/my/my_strcapitalize.c \
	lib/my/my_error_output.c \
	lib/printf/my_printf.c \
	lib/printf/my_putdouble.c \
	lib/printf/my_putlong.c \
	lib/printf/my_octal.c \
	lib/printf/my_high_hexa.c \
	lib/printf/my_low_hexa.c \
	lib/printf/my_putptr.c \
	lib/printf/my_binary.c \
	lib/printf/my_nonprintable_char.c

OBJ = $(SRC:.c=.o)
.SILENT:$(OBJ)

NAME_LIB = libmy.a

all: $(NAME_LIB)

.SILENT:$(NAME_LIB)
$(NAME_LIB): $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[36m -> library compilation done \033[0m"

.SILENT:clean
clean:
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[36m -> library clean done \033[0m"

.SILENT:fclean
fclean: clean
	rm -f $(NAME_LIB)
	@echo "\x1b[1m\x1b[36m -> library fclean done \033[0m"

re: fclean all
