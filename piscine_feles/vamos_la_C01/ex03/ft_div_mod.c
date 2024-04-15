/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:17:40 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/14 12:27:44 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	div;
	int	mod;
	
	div = 0;
	mod = 0;
	ft_div_mod(25 ,10 ,&div , &mod);
	div = div + '0';
	mod = mod + '0';
	write(1, &div,1 );
	write(1, &mod,1 );

}
*/
