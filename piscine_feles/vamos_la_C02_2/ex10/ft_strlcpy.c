/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:25:11 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/21 11:15:31 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	r;

	r = 0;
	size--;
	if (size == 1)
		return (0);
	while (*src)
	{
		if (r < size)
		{
			dest[r] = *src;
		}
		r++;
		src++;
	}
	dest[r + 1] = '\0';
	return (ft_strlen(dest));
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
int	main(void)
{
	char orgin[] = "vamos la para mais um" ;
	char copi[8];

	ft_strlcpy(copi, orgin, 5);
	ft_putstr(copi);

}*/
