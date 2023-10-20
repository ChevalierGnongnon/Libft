all: $(NAME)

$(NAME):
	libt.a
clean:
	rm -f 
fclean: clean
	rm -f $(NAME)	
re: fclean all
