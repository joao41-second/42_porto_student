#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    size_t val;
    char *dest;
    char *ret;
    val = 0;
    dest = (void *) s;
    i = 0;
    while(i < n)
    {
        if(dest[i] == c){
            val= 1;
            break;
            }
        i++;
    }
    if (val == 1)
    {
        ft_strlcpy(dest, &s[i], ft_strlen(s) - i + 1);
        return(( unsigned char *) dest);
    }
    return(NULL);
}
/*
int	main(int ac, char **av)
{
	char	*ok;

	ok = av[1];
	printf("%s\n", (char *)ft_memchr(ok, av[2][0],4));
	printf("%s", (char *)memchr(av[1], av[2][0],4));
}*/
