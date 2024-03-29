#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/31 13:17:35 by mnguyen           #+#    #+#              #
#    Updated: 2015/10/31 13:48:51 by mnguyen          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = lem-in

SRC = main.c get_data.c lib_1.c check_errors.c fun_err_01.c \
	    init_1.c hash.c  get_data_tools.c get_data_tools2.c \
		lib_2.c pathfinder.c find_paths.c \
		get_comb_set.c get_comb_set_tools1.c check_path.c calc.c aff.c sort.c \
		get_data_tools3.c pathfinder_tools.c combine.c

LIBSRC = ft_memset.c ft_memalloc.c ft_memmove.c \
	 	 ft_strchr.c ft_strjoin.c ft_strsub.c ft_strcpy.c ft_strnew.c \
		 ft_memcpy.c ft_strcat.c ft_putnbr.c ft_atoi.c ft_isdigit.c \
		 ft_strsplit.c ft_strcmp.c ft_strncmp.c get_next_line.c

OBJ = $(SRC:.c=.o)

LIBOBJ = $(LIBSRC:.c=.o)

SRCDIR = ./srcs/

OBJDIR = ./objs/

LIBSRCDIR = ./srcs/libft/

SRCS = $(addprefix $(SRCDIR), $(SRC))

OBJS = $(addprefix $(OBJDIR), $(OBJ))

LIBSRCS = $(addprefix $(LIBSRCDIR), $(LIBSRC))

LIBOBJS = $(addprefix $(OBJDIR), $(LIBOBJ))

CC = gcc

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I ./includes

all: $(NAME)

$(NAME): $(OBJS) $(LIBOBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(LIBOBJS)

$(OBJS): $(SRCS) $(LIBSRCS)
	rm -rf $(OBJDIR)
	mkdir $(OBJDIR)
	$(CC) $(FLAGS) $(INCLUDES) -c $(SRCS) $(LIBSRCS)
	mv $(OBJ) $(LIBOBJ) $(OBJDIR) 

clean:
	rm -rf $(OBJS) $(LIBOBJS)
	rm -rf $(OBJ) $(LIBOBJ)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
