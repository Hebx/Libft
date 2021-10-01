NAME=libft.a
SRC=ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strcpy.c
OBJS=$(SRC:.c=.o)

HEADER=includes
FOLDER=srcs
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all: $(NAME)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $< -I $(HEADER)
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) libft.a
re: fclean all
