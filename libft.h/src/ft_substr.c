#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *str;
    str = ft_calloc(len,sizeof(char)+1);
    if (str != NULL)
        ft_strlcpy(str,&s[start],len+1);
    return(str);
}
/*
int main(int ca,char **av)
{
    printf("%s",ft_substr(av[1],1,10));
}*/
