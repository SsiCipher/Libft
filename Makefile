COMP	= cc
NAME	= libft.a
FLAGS	= -Wall -Wextra -Werror

SRCS =	ft_abs.c \
		ft_bzero.c \
		ft_every_char.c \
		ft_isalpha.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_putendl_fd.c \
		ft_split_set.c \
		ft_strjoin_many.c \
		ft_strstr.c \
		ft_add_arr.c \
		ft_calloc.c \
		ft_find.c \
		ft_isascii.c \
		ft_lstadd_front.c \
		ft_memchr.c \
		ft_puthex_fd.c \
		ft_strcasecmp.c \
		ft_strlcat.c \
		ft_strtrim.c \
		ft_add_str.c \
		ft_contains.c \
		ft_find_n_replace.c \
		ft_isdigit.c \
		ft_lstclear.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_substr.c \
		ft_any.c \
		ft_contains_set.c \
		ft_free_arr.c \
		ft_isempty.c \
		ft_lstdelone.c \
		ft_memcpy.c \
		ft_putstr_fd.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c \
		ft_arr_indexof.c \
		ft_countchr.c \
		ft_indexof.c \
		ft_isprint.c \
		ft_lstiter.c \
		ft_memmove.c \
		ft_qsort.c \
		ft_strdup.c \
		ft_strmapi.c \
		ft_tolower.c \
		ft_arr_len.c \
		ft_ctos.c \
		ft_inrange.c \
		ft_isspace.c \
		ft_lstlast.c \
		ft_memset.c \
		ft_qsort_str.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_del_arr.c \
		ft_intlen.c \
		ft_itoa.c \
		ft_lstmap.c \
		ft_putbin_fd.c \
		ft_realloc.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_bsort.c \
		ft_every.c \
		ft_isalnum.c \
		ft_loop.c \
		ft_lstnew.c \
		ft_putchar_fd.c \
		ft_split.c \
		ft_strjoin_arr.c \
		ft_strrchr.c \
		ft_getline.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c libft.h
	cc $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
