src		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c

o		= $(src:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

all: $(NAME)
	chmod +x libft.a


$(NAME): $(o)
	ar rcs	$(NAME) $(o)

clean:
	rm -f $(o)

fclean:
	clean rm -f $(NAME)


