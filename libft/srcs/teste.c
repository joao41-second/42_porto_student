
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t des_len;
    size_t fin_len;
     des_len = ft_strlen(dst);
     
    fin_len = size - des_len;
    
    if ((int )size < 0){
        fin_len = des_len + ft_strlen(src);
     }
     //ft_putnbr_fd(fin_len,1);
    if (des_len < fin_len -1 &&  > 0)
    {
    // ft_memmove(&dst[des_len],src, fin_len-1);
     dst[fin_len] = '\0';
    }
     if (des_len >= size)
		des_len = size;
    
   
	return (des_len + ft_strlen(src));

}