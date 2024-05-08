/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:03:30 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/07 15:41:07 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	nuber(int r, int fd,int len)
{
	int		rest;
	char	temp;	
	
	len++;
	rest = r % 10;
	temp = rest + '0';
	r = r / 10;
	if (r >= 10)
		nuber(r, fd,len);
	else
		ft_putchar_fd(r + '0', fd);
	ft_putchar_fd(temp, fd);
}

int	ft_putnbr_fd(int n, int fd)
{
	static int len;
	len = 0; 
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return(ft_strlen("-2147483648")) ;
	}
	if (n < 0)
	{
		n = -(n);
		ft_putchar_fd('-', fd);
		len++;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
		nuber(n, fd,len);
	return(len);
}

// int main(int ac,char **av)
// {
//     ft_putnbr_fd(ft_atoi(av[1]),1);

// }
