/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:51:43 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 17:19:03 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	var;
	unsigned int	star;

	if (nb < 0)
		return (0);
	var = 0;
	star = 0;
	while ((unsigned int)nb != var && var <= (unsigned int)nb)
	{
		star++;
		var = star * star;
	}
	if ((unsigned int)nb != var)
		return (0);
	return (star);
}
/*
#include <stdio.h>

int	main(void)
{

	int a =  ft_sqrt(9999999999);
	printf("%d",a );
}*/
