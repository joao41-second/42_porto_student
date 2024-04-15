/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:06:57 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/22 16:46:57 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	r;

	r = 0;
	while (*src && r < n)
	{
		dest[r] = *src;
		r++;
		src++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main () {
   char src[40]= "";
   char dest[12];
  
  
   
   ft_strncpy(dest, src, 4);

   ft_putstr(dest);
   
   return(0);
}*/
