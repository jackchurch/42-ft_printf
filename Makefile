NAME=libftprintf.a
CODEDIRS=.
INCDIRS=.

CC=gcc
OPT=-O0

DEPFLAGS=-MP -MD
CFLAGS=-Wall -Werror -Wextra -g $(foreach D,$(INCDIRS),-I$(D)) $(OPT) $(DEPFLAGS)
CFILES=$(foreach D,$(CODEDIRS),$(wildcard $(D)/*.c))
OBJECTS=$(patsubst %.c,%.o,$(CFILES))
DEPFILES=$(patsubst %.c,%.d,$(CFILES))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(DEPFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

-include $(DEPFILES)

.PHONY: all clean fclean re
