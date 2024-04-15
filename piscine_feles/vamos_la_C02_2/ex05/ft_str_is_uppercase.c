/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:51:10 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/19 08:51:17 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	comfitm(int *resul, int conta, int contador)
{
	if (conta == contador)
	{
		*resul = 1;
	}
	else
	{
		*resul = 0;
	}
}

int	ft_str_is_uppercase(char *str)
{
	int	conta;
	int	contador;
	int	alf_m;
	int	resl;

	conta = 0;
	contador = 0;
	alf_m = 'A';
	while (*str)
	{
		while (alf_m <= 'Z')
		{
			if (alf_m == *str)
			{
				contador++;
			}
			alf_m++;
		}
		alf_m = 'A';
		conta++;
		str++;
	}
	comfitm(&resl, conta, contador);
	return (resl);
}
/*
int	main(void)
{
	char ok[50] ="MIOi";
	int print;
	print = ft_str_is_uppercase(ok);
	print = print + '0';
	write(1,&print,1);
}*/
