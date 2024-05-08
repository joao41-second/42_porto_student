/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 03:54:28 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/07 15:33:05 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int ft_printp(unsigned long decimal )
{
	char *base = "0123456789abcdef";
	ft_putstr_fd("0x",1);
	ft_putnbr_base(decimal ,base);
	return(0);
}


/* int main()
{
	
void *ptr = (void *)0x7ffeefbff710;	
char test[] = "afdsfsadfasdfsadfasdfsdafsadfdasfsdafasdf";
void *pint = 'a';
ft_printp(test);
ft_putchar_fd('\n',1);
printf("%d",test );
printf("\n%p",test );

}  */