/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:17:30 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 12:01:44 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	ret;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	ret = 1;
	if (1 < power)
	{
		power--;
		ret = ft_recursive_power(nb, power);
	}
	ret = ret * nb;
	return (ret);
}

/*
#include <stdio.h>

int	main(void)
{
		int mult = ft_recursive_power(9, 2);
		printf("%d",mult);


}*/
