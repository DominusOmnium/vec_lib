NAME = lib/vec_lib.a

SRCDIR = srcs/
INCDIR = includes/
OBJDIR = obj/

SRCS =	vec_add.c \
		vec_cross.c \
		vec_mod.c \
		vec_mul.c \
		vec_mul_n.c \
		vec_scalar.c \
		vec_sub.c

OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

CC = gcc -g -Wall -Wextra -Werror

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
