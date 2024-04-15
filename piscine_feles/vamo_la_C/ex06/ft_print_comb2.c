/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:29:12 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/14 15:06:46 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_0(int d, int u)
{
	d = d + '0';
	u = u + '0';
	write(1, &d, 1);
	write(1, &u, 1);
}

void	printed(int d, int u, int dc, int uc)
{
	write(1, " ", 1);
	print_0(dc, uc);
	write(1, " ", 1);
	print_0(d, u);
	if (dc == 9 && uc == 9 && d == 9 && u == 8)
	{
	}
	else
	{
		write(1, ",", 1);
	}
}

void	ifs(int d, int u, int dc, int uc)
{
	int	n_0;
	int	n_1;

	n_0 = (d * 10) + u;
	n_1 = (dc * 10) + uc;
	if (n_0 > n_1)
	{
		printed(d, u, dc, uc);
	}
}

void	contador(int d, int u, int dc, int uc)
{
	while (u <= 9)
	{
		ifs(d, u, dc, uc);
		if (u == 9)
		{
			u = 0;
			d++;
		}
		if (d > 9)
		{
			return ;
		}
		u++;
	}
}

void	ft_print_comb2(void)
{
	int	u;
	int	d;

	d = 0;
	u = 0;
	while (u <= 9)
	{
		contador(0, 1, d, u);
		if (u == 9)
		{
			u = 0;
			d++;
		}
		if (d > 9)
		{
			return ;
		}
		u++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
