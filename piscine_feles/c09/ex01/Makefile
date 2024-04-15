
srcs = srcs/ft_puchar.c  srcs/ft_putstr.c  srcs/ft_strcmp.c  srcs/ft_strlen.c

chcc = ${srcs:.c=.o}

incs = includes

cc = gcc

flegs = -Wall -Wextra -Werror

p2 = ar rc

finch = ranlib

name = libft.a

RM = rm

.c.o:
	${cc} ${flegs} -c $< -o ${<:.c=.o} -I ${incs}

${name}: ${chcc}
	 ${p2} ${name} ${chcc} 
	 ${finch} ${name}

all: ${name}

clean :
	${RM} ${chcc}

fclean :  
	${RM} ${name}

re: fclean all


