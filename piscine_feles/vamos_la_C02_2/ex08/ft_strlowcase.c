/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:21:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/16 12:11:20 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	conter;

	conter = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str[conter] = str[conter] + 32;
		}
		str++;
	}
	return (str);
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
 char ok[] = "VAMOS la";
  
 ft_strlowcase(ok);
 ft_putstr(ok);
}*/
