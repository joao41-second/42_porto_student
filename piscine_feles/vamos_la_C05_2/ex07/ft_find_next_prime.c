/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:02:39 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/24 10:30:04 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	var;
	int	div;

	var = 3;
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
		var++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	ret;
	int	new;

	new = 0;
	ret = 0;
	ret = ft_is_prime(nb);
	while (ret == 0)
	{
		nb++;
		ret = ft_is_prime(nb);
	}
	return (nb);
}

/*
int	main(void)
{

	ft_is_prime(2000000000);
}*/
