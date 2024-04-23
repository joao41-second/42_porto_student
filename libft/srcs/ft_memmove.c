/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:46:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/19 23:01:14 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;
	size_t	a;
	unsigned char	*str;
	unsigned char	*des;

	a = n - 1;
	cont = 0;
	str = (unsigned char *)src;
	des = (unsigned char *)dest;
	if(des == (void *)0 && str ==(void *)0)
		return NULL;

	if (str > des)
	{
		while (cont < n)
		{
			des[cont] = str[cont];
			cont++;
		}
	}
	else
	{
		while (cont < n)
		{
			des[a] = str[a];
			a--;
			cont++;
		}
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
    ft_putstr_fd(des2);
    ft_putchar_fd("\n");
    

}

int	main(void)
{
    char str[100] = "ola mundo";
    char *des = &str[7];
    ft_memmove(str,des,10);
    print(str);
    print("\n");
    
}*/
