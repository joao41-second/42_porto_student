/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:03:05 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/22 17:46:10 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	var0;
	int	var1;
	int	temp;

	var0 = 0;
	var1 = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (var0);
	index--;
	while (index > 0)
	{
		temp = var1;
		var1 = var1 + var0;
		var0 = temp;
		index--;
	}
	return (var1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	ok;

	ok = ft_fibonacci(5);
	printf("%d",ok);
}
*/
