CC = cc
CFLAGS = $(GENERAL) -g -L.. -lft -lbsd
GENERAL = general_utils.c
MANDATORY = test_ft_is.c test_ft_strlen.c test_ft_memset.c test_ft_bzero.c test_ft_memcpy.c \
test_ft_memmove.c test_ft_strlcpy.c test_ft_strlcat.c test_ft_toupper.c test_ft_tolower.c test_ft_strchr.c \
test_ft_strrchr.c test_ft_strncmp.c test_ft_memchr.c test_ft_memcmp.c test_ft_strnstr.c test_ft_atoi.c
OBJECTS = $(MANDATORY:.c=.o)

.PHONY: all

all: $(OBJECTS)

$(filter %.o,$(OBJECTS)): %.o: %.c
	@$(CC) $< $(CFLAGS) && ./a.out && rm -f a.out