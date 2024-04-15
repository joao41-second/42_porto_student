/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:29:38 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/14 12:48:40 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_s;
	int	b_s;

	a_s = *a;
	b_s = *b;
	*a = a_s / b_s;
	*b = a_s % b_s;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	a = a + '0';
	b = b + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}*/
