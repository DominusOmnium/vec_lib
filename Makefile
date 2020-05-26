NAME = lib/vec_lib.a

SRCDIR = srcs/
INCDIR = includes/
OBJDIR = obj/

SRCS =	vec_base.c \
		vec_base1.c \
		vec_base2.c

OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

CC = gcc -g

all: $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) -I $(INCDIR) $(CFLAGS) -o $@ -c $<

$(NAME): obj $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
