/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:21:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/16 11:27:52 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	conter;

	conter = 0;
	while (str[conter])
	{
		if (str[conter] >= 'a' && str[conter] <= 'z')
		{
			str[conter] = str[conter] - 32;
		}
		conter++;
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
int	main(int argc ,char **argv)
{  
 ft_strupcase(&*argv[1]);
 ft_putstr(&*argv[1]);
}*/
