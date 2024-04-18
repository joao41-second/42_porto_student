/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:11:17 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/12 15:46:03 by jperpect         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{

  ft_memmove(dst,  src,size-1);
  dst[size-1] = '\0';
  
  return(ft_strlen(dst));
  
}

/*
int main(void)
{
    char des[100]= "aaaaaaaaaaaaaaaa";
    char *src = "primeiro";
    ft_strlcpy(des,src,8);
    //strlcpy(des,src,8);
    print(des);

}*/