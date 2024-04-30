/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:29:07 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/26 19:54:40 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*nuber(int cont, int r, char *ret)
{
	int		rest;
	char	temp;

	while (0 <= cont)
	{
		rest = r % 10;
		temp = rest + '0';
		ret[cont] = temp;
		r = r / 10;
		cont--;
	}
	return (ret);
}

static int	conta(int n, int cont)
{
	if (n == 0)
		return(1);
	while (n > 0)
	{
		cont++;
		n = n / 10;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	int		cont;
	int		neg;
	char	*ret;
	neg = 0;
	if (n < 0)
	{
		cont = 0;
		n = -(n);
		neg = 1;
	}
	else
		cont = -1;
	cont = conta(n, cont);
	ft_putnbr_fd(cont+1+neg,1);
	ft_putchar_fd('\n',1);
	ret = ft_calloc(cont+1+neg, sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret = nuber(cont, n, ret);
	if (neg == 1)
	{
		ret[0] = '-';
		if (-(n) == -2147483648)
			ret = "-2147483648";
	}
	return (ret);
}

int	main(int ac, char **av)
{
	ft_putstr_fd( ft_itoa(ft_atoi(av[1])),1);
}
