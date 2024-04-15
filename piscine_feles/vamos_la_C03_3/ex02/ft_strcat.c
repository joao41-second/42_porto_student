/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 08:36:06 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/19 09:35:30 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	conta;
	int	conta_2;
	int	a_contar;

	conta = 0;
	conta_2 = 0;
	a_contar = 0;
	while (src[conta_2] != 0)
	{
		conta_2++;
	}
	dest = dest - 0;
	while (dest[conta] != 0)
	{
		conta++;
	}
	while (a_contar <= conta_2)
	{
		dest[conta + a_contar] = src[a_contar];
		a_contar++;
	}
	return (dest);
}
/*
int	main(void)
{
	char prim[1000] = "vamos la";
	char prim2[100] = "eu primeiro";
	ft_strcat(prim,prim2 );
	int conta;
	conta = 0;
	while(prim[conta] != 0)
	{
		write(1,&prim[conta] ,1);
		conta++;
	}

}*/
