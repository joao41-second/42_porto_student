/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:46:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/15 17:51:03 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t cont;
	size_t a ;
	char *str;
	char *des;
	char cop[n];
	a = n;
	cont = 0;
	str = (char *) src;
	des = (char *) dest;
	while (str[cont] != '\0' && cont < ft_strlen(src))
	{
		cop[cont]= str[cont]; 
		cont++;
	}
	
	if (ft_strlen(src)< n)
	a = ft_strlen(src);
	cont = 0;
	while( cont < a )
		{
			des[cont] = cop[cont];
			cont++;
			}
	return (des);
}
/*
int main(void)
{
	 char str[100] = "olaaaa mundo";
    char *des = &str[3];
	char str2[100] = "olaaaa mundo";
    char *des2 = &str2[3];

	memmove(des,str,9);
	print(des);
	 print("\n");
	
    ft_memmove(des2,str2,9);
    print(des2);
    print("\n");
    

}

int main(void)
{
    char str[100] = "ola mundo";
    char *des = &str[3];
    ft_memmove(str,des,3);
    print(str);
    print("\n");
    print(des);
}*/


