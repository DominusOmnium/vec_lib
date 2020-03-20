NAME = vec_lib.a

SRCDIR = srcs/
INCDIR = includes/
OBJDIR = obj/
LIBDIR = lib/

SRCS =	vec_base.c \
		vec_base1.c \
		vec_base2.c

OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

CC = gcc

all: $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) -I $(INCDIR) $(CFLAGS) -o $@ -c $<

$(NAME): obj $(OBJS)
	ar rc $(addprefix $(LIBDIR), $(NAME)) $(OBJS)
	ranlib $(addprefix $(LIBDIR), $(NAME))

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
