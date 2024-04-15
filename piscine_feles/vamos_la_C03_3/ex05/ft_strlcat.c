/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:50:22 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/22 08:58:28 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_n;
	unsigned int	con_size;
	unsigned int	i;

	i = 0;
	dest_n = ft_strlen(dest);
	if (size == 0 || size == dest_n)
	{
		return (dest_n);
	}
	con_size = size - dest_n -1;
	while (i <= con_size)
	{
		if (i <= con_size)
		{
			dest[dest_n + i] = src[i];
		}
		else
		{
			return (dest_n);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char varia[20]="vou me juntar";
	char dest[] = "eu primeiro";
	ft_strlcat(dest,varia,20);
	int i = 0;
	while(dest[i] != 0 )
	{
		write(1,&dest[i],1);
		i++;
	}

}*/
