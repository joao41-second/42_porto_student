/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:21:39 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/14 15:14:15 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	conta;

	conta = 0;
	while (*str)
	{
		str++;
		conta++;
	}
	return (conta);
}
/*
int	main(void)
{
	int	conta;

	conta = ft_strlen("ok");
	conta = conta + '0';
	write(1, &conta, 1);
}*/
