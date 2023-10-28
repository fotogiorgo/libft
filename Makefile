# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 16:07:12 by ehida             #+#    #+#              #
#    Updated: 2023/10/27 20:21:34 by jofoto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =			libft.a

FLAGS =			-Wall -Wextra -Werror

SRC =			list/ft_lstadd_back_bonus.c \
				list/ft_lstclear_bonus.c \
				list/ft_lstiter_bonus.c \
				list/ft_lstmap_bonus.c \
				list/ft_lstsize_bonus.c \
				list/ft_lstadd_front_bonus.c \
				list/ft_lstdelone_bonus.c \
				list/ft_lstlast_bonus.c \
				list/ft_lstnew_bonus.c \
				memory/ft_bzero.c \
				memory/ft_calloc.c \
				memory/ft_memchr.c \
				memory/ft_memcmp.c \
				memory/ft_memcpy.c \
				memory/ft_memmove.c \
				memory/ft_memset.c \
				print/ft_putchar_fd.c \
				print/ft_putendl_fd.c \
				print/ft_putnbr_fd.c \
				print/ft_putstr_fd.c \
				strings/is_char_in_set.c \
				strings/ft_isascii.c \
				strings/ft_strdup.c \
				strings/ft_strlcat.c \
				strings/ft_strmapi.c \
				strings/ft_strrchr.c \
				strings/ft_isalnum.c \
				strings/ft_isdigit.c \
				strings/ft_split.c \
				strings/ft_striteri.c \
				strings/ft_strlcpy.c \
				strings/ft_strncmp.c \
				strings/ft_strtrim.c \
				strings/ft_isalpha.c \
				strings/ft_isprint.c \
				strings/ft_strchr.c \
				strings/ft_strjoin.c \
				strings/ft_strlen.c \
				strings/ft_strnstr.c \
				strings/ft_substr.c \
				streams/get_next_line.c \
				streams/get_next_line_utils.c \
				convertions/ft_tolower.c \
				convertions/ft_toupper.c \
				convertions/ft_atoi.c \
				convertions/ft_itoa_base.c \
				convertions/ft_itoa_unsigned_long.c \
				convertions/ft_itoa_unsigned.c \
				convertions/ft_itoa.c

OBJ		= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -ruvcs $(NAME) $(OBJ) 

$(OBJ): %.o: %.c
	$(CC) $(FLAGS) -c $? -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
