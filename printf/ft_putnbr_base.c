/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:46:35 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/07 15:32:42 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"



static void nuber( long int nbr, int base,char *b)
{
	long int temp;
	temp = nbr%base;
	nbr = nbr/base;
	if (nbr >= base)
		nuber(nbr,base,b);
	else if (nbr > 0)
		ft_putchar_fd(b[nbr],1);
	ft_putchar_fd(b[temp],1);
}



int ft_putnbr_base( long int nbr, char *base)
{
	int len_base;
	len_base = ft_strlen(base);
	if (nbr <= -2147483648)
		nbr = -(nbr);
	if ( nbr < 0)
	{
		nbr = -(nbr);
		ft_putchar_fd('-',1);
	}
	nuber(nbr,len_base,base);
	
	return(0);
}

/* int main(int ac,char** av)
{
	char *base = "0123456789ABCDEF";
	char *base_10 = "0123456789";
	ft_putnbr_base(ft_atoi( av[1]),base);
} */