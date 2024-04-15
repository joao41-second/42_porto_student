/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:41:45 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/22 16:21:09 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (nb == 0)
	{
		return (dest);
	}
	if (nb > 0)
	{
		nb--;
	}
	while (src[n] != '\0' && n <= nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
/*
int	main(int argc , char **argv)
{
	char prim[1000] = "Helwor";
	char prim2[100] = "World";
	ft_strncat(argv[1],argv[2],2);
	int conta;
	conta = 0;
	while(argv[1][conta] != 0)
	{
		write(1,&argv[1][conta],1);
		conta++;
	}

}*/
