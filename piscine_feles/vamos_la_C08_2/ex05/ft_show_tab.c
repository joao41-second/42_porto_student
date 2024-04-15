/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:25:27 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/30 09:02:18 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

//#include "ft_strs_to_tab.c"

int	print_nb(int nb)
{
	int	var;

	var = 0;
	if (nb > 9)
	{
		print_nb(nb / 10);
	}
	var = (nb % 10) + '0';
	write(1, &var, 1);
	return (var);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < -2147483648 || nb > 2147483647)
	{
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	print_nb(nb);
}

void	print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		print("\n");
		print(par[i].str);
		print("\n");
		print(par[i].copy);
		print("\n");
		i++;
	}
}
/*
int	main(void)
{
	int i = 0;
	int pal = 3;
	char *ko[] = {"ok","vamos","la"};
	struct s_stock_str  *test =  ft_strs_to_tab(pal,ko );
	ft_show_tab(test);

}*/
