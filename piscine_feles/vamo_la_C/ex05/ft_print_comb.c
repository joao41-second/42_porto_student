/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:14:39 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/14 12:22:57 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char c, char d, char u)
{
	if( u == '9' && d == '8' && c == '7')
	{
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, &u, 1);
	}
	else
	{
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, &u, 1);
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 0 + '0';
	d = 1 + '0';
	u = 2 + '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				print (c, d, u);
				u++; 
			}
			d++;
		}
		c++;
	}
}
/*
int	main(void)
{
	
	ft_print_comb();
}*/
