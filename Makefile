# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/21 12:53:26 by tkruger           #+#    #+#              #
#    Updated: 2021/12/21 22:58:38 by tkruger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -c
SDIR = ./src

# **************************************************************************** #
#		SRC
# **************************************************************************** #

#	ctype

CTYPEDIR = $(SDIR)/ctype
SRC := $(CTYPEDIR)/ft_count_char.c $(CTYPEDIR)/ft_isalnum.c \
		$(CTYPEDIR)/ft_isalpha.c $(CTYPEDIR)/ft_isascii.c \
		$(CTYPEDIR)/ft_isdigit.c $(CTYPEDIR)/ft_isprint.c \
		$(CTYPEDIR)/ft_iswhitespace.c $(CTYPEDIR)/ft_tolower.c \
		$(CTYPEDIR)/ft_toupper.c

#	itype

ITYPEDIR = $(SDIR)/itype
SRC += $(ITYPEDIR)/ft_abs.c $(ITYPEDIR)/ft_diff.c $(ITYPEDIR)/ft_isint.c \
		$(ITYPEDIR)/ft_max.c $(ITYPEDIR)/ft_min.c
#	lst

LSTDIR = $(SDIR)/lst
SRC += $(LSTDIR)/ft_lstadd_back.c $(LSTDIR)/ft_lstadd_front.c \
		$(LSTDIR)/ft_lstclear.c $(LSTDIR)/ft_lstdelone.c $(LSTDIR)/ft_lstiter.c \
		$(LSTDIR)/ft_lstlast.c $(LSTDIR)/ft_lstmap.c $(LSTDIR)/ft_lstnew.c \
		$(LSTDIR)/ft_lstsize.c

#	mem

MEMDIR = $(SDIR)/mem
SRC += $(MEMDIR)/ft_memchr.c $(MEMDIR)/ft_memcmp.c $(MEMDIR)/ft_memcpy.c \
		$(MEMDIR)/ft_memmove.c $(MEMDIR)/ft_memset.c $(MEMDIR)/ft_bzero.c \
		$(MEMDIR)/ft_calloc.c $(MEMDIR)/ft_free_all.c $(MEMDIR)/ft_free.c

#	put

PUTDIR = $(SDIR)/put
SRC += $(PUTDIR)/ft_putchar_fd.c $(PUTDIR)/ft_putendl_fd.c \
		$(PUTDIR)/ft_putnbr_fd.c $(PUTDIR)/ft_putstr_fd.c

#	str

STRDIR = $(SDIR)/str
SRC += $(STRDIR)/ft_atoi.c $(STRDIR)/ft_itoa.c $(STRDIR)/ft_split.c \
		$(STRDIR)/ft_strchr.c $(STRDIR)/ft_strdup.c $(STRDIR)/ft_striteri.c \
		$(STRDIR)/ft_strjoin.c $(STRDIR)/ft_strlcat.c $(STRDIR)/ft_strlcpy.c \
		$(STRDIR)/ft_strlen.c $(STRDIR)/ft_strmapi.c $(STRDIR)/ft_strncmp.c \
		$(STRDIR)/ft_strnstr.c $(STRDIR)/ft_strrchr.c $(STRDIR)/ft_strtrim.c \
		$(STRDIR)/ft_substr.c


# **************************************************************************** #
#		rules
# **************************************************************************** #

$(NAME):
	@gcc $(CFLAGS) $(SRC)
	@ar -crs $(NAME) ft_*.o

all: $(NAME)

clean:
	@rm -f *.o *~
	
fclean: clean
	@rm -f $(NAME)

re: fclean all
