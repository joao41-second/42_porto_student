/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:55:35 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/10 09:55:49 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <unistd.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(int argc ,char **argv) 
{
	int a = 0; 
	write(1,&argv[1][0],1);
	a = ft_isalpha(argv[1][0]) + '0';

	write(1,&a,1);
	write(1,"p",1);
}*/
