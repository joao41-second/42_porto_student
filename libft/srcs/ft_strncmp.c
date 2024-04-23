#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t a;
    a = 0;
    if (n == 0)
        return(0); 
    while((s1[a] != '\0' && s2[a] != '\0') &&  a < n-1)
    {
        if ( s1[a] != s2[a])
        return (( unsigned char )s1[a] -( unsigned char )s2[a]);
        a++;

    }
    return (( unsigned char )s1[a] -( unsigned char )s2[a]);
}
/*
int main (int ac, char **av)
{
    printf ( "%d\n",ft_strncmp(av[1],av[2],0));
    printf ( "%d" ,strncmp(av[1],av[2],0));

}*/