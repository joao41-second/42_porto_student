/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 07:40:45 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/23 11:36:13 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <stdio.h>

int	ft_atoi(char *str)
{
	int final;
	int conta;
	int nul;
	int i;

	i = 0;
	nul = 0;
	while(str[i] <= 32) 
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nul++;
		if (nul > 2)
			nul = 0;
		
		i++;
	}
	if(str[i] < '0' || str[i]  > '9')
		return 0;
	final = 0;
	while(str[i] && (str[i] >= '0' && str[i]  <= '9'))
	{
		final = final * 10 + (str[i] - '0');
		i++;
	}
	if(nul == 1)
		final = -final; 
	return(final);
	
}

int	main(int argc,char **argv)
{
	int p;
	p = ft_atoi(&*argv[1]);
	printf("%d", p );
}
