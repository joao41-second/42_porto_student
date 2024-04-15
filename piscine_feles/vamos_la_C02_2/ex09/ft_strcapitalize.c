/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:41:23 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/19 08:54:27 by jperpect         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	conter;

	ft_strlowcase(str);
	conter = 0;
	if (str[conter] >= 'a' && str[conter] <= 'z')
	{
		str[conter] = str[conter] - 32;
	}
	while (*str)
	{
		if (*str == ' ' || *str == '-' || *str == '+')
		{
			conter++;
			if (str[conter] >= 'a' && str[conter] <= 'z')
			{
				str[conter] = str[conter] - 32;
			}
			conter--;
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
	char ok [] = "HELLO";
	ft_strcapitalize(ok);
	ft_putstr(ok);

}*/
