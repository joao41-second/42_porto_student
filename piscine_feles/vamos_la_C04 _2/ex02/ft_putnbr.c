/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:46:04 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 08:19:41 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	pirnt(int nb)
{
	int	set;

	set = 0;
	if (nb == 10)
	{
		nb = 1;
		set = 1;
	}
	nb = nb + '0';
	write(1, &nb, 1);
	nb = nb - '0';
	if (set == 1)
		write(1, "0", 1);
}

void	conrario(int nb, int div)
{
	int	mul;
	int	na;
	int	f;

	mul = 1;
	f = 0;
	if (10 < nb)
		f = 0;
	else
		f = 1;
	while (f < div)
	{
		mul = mul * 10;
		div--;
	}
	while (mul >= 1)
	{
		na = nb / mul;
		nb = nb % mul;
		mul = mul / 10;
		if (na == 1)
			pirnt(1);
		else
			pirnt(na);
	}
}

void	calcula(int nb, int div, int vir)
{
	div++;
	nb = nb / 10;
	if (nb > 10)
	{
		calcula(nb, div, vir);
	}
	else
	{
		nb = nb + '0';
		conrario(vir, div);
	}
}

void	ft_putnbr(int nb)
{
	int	div;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < -2147483648 || nb > 2147483647)
	{
		return ;
	}
	div = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	calcula(nb, div, nb);
}
/*
int	main(void)
{
	ft_putnbr(1045621);
}*/
