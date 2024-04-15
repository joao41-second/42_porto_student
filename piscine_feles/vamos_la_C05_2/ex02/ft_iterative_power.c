/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:11:54 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 08:56:06 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	mult;

	if (power < 0)
		return (0);
	mult = 1;
	while (0 < power)
	{
		mult = mult * nb;
		power--;
	}
	return (mult);
}
/*
#include <stdio.h>

int     main(int argc, char **argv)
{
	int i = atoi(&*argv[1]);
	int a = atoi(&*argv[2]);
	int mult = ft_iterative_power(i, 0);
	printf("%d",mult);


}*/
