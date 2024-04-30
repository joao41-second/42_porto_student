#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *str;

    
    if (len > ft_strlen(s) - start)
            len = ft_strlen(s) - start;
  
    if(start > ft_strlen(s))
        len = 0;
        
     

    str = (char *) malloc(((len +1) *sizeof(char)));


    if (str != NULL){       
        ft_strlcpy(str,&s[start],len+1);
        
    }
    return(str);
}
/*
int main(int ca,char **av)
{
    char *ok = ft_substr("0123456789", 9, 10);
    ft_putstr_fd(ok,1);
   
   
    free(ok);
}*/
