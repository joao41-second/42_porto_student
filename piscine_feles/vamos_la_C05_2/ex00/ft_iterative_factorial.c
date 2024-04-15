/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:42:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 14:55:28 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	var;

	if (nb < 0)
		return (0);
	var = 1;
	while (nb > 1)
	{
		var = nb * var;
		nb--;
	}
	return (var);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{

	int a =  ft_iterative_factorial(atoi(&*argv[1]));
	printf("%d",a );
}*/
