all: $(NAME)

$(NAME):
	libt.a
clean:
	rm -f 
fclean: clean
	rm -f $(NAME)	
re: fclean all

sources:
	ft_atoi.c
	ft_bzero.c
	ft_isalnum.c
	ft_isalpha.c
	ft_isascii.c
	ft_isdigit.c
	ft_isprint.c
	ft_memchr.c
	ft_memcmp.c
	ft_memcpy.c
	ft_memmove.c
	ft_memset.c
	ft_strchr.c
	ft_strlen.c
	ft_strncmp.c
	ft_strrchr.c
	ft_tolower.c
	ft_toupper.c
