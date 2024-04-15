/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:41:17 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/19 09:16:20 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	lista;

	lista = 0;
	while (*s1 || *s2)
	{
		lista = *s1 - *s2;
		if (lista == 0)
		{
		}
		else
		{
			return (lista);
		}
		s1++;
		s2++;
	}
	return (lista);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[]="Hello";
	char str2[]="He";
	unsigned int r  = 5;

	int reurn;
	reurn = ft_strcmp(str1,str2);
	
	printf( "%d", reurn);

}*/
