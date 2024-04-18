/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:11:09 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/12 17:10:56 by jperpect         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t des_len;
    des_len = ft_strlen(dst);
    
    ft_memmove(&dst[des_len],src,size-des_len-1);
    dst[size] = '\0';
return  (ft_strlen(dst));

}

/*
int main(void)
{
    char des[100]= "aaa";
    char *src = "primeiro";
    ft_strlcat(des,src,8);
    //strlcat(des,src,8);
    print(des);

}*/