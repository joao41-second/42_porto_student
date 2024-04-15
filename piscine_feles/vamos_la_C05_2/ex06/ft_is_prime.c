/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:19:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 13:55:28 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	var;
	int	div;

	var = 2;
	div = 0;
	if (nb < 2)
		return (0);
	while (var < nb)
	{
		if (nb % var == 0)
		{
			return (0);
		}
		var++;
	}
	return (1);
}
/*
int	main(void)
{
	ft_is_prime(5);
}*/
