/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:12 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 14:45:01 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	var;

	if (nb < 0)
	{
		return (0);
	}
	var = 1;
	if (0 < nb)
	{
		nb--;
		var = ft_recursive_factorial(nb);
	}
	nb++;
	var = nb * var;
	return (var);
}
/*
#include <stdio.h>

#include <stdlib.h>

int     main(int argc, char **argv)
{
	int i = atoi(&*argv[1]);
	int a =  ft_recursive_factorial(i);
	printf("%d",a );
}*/
