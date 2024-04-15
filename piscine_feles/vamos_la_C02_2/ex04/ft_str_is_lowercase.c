/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:36 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/16 08:27:38 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	lagabetos(int couter, int couter_min, int *retor )
{
	if (couter == couter_min)
	{
		*retor = 1;
	}
	else
	{
		*retor = 0;
	}
}

int	alfa(int alf, char *str, int ret)
{
	int	couter;
	int	couter_min;

	couter = 0;
	couter_min = 0;
	while (*str)
	{
		while (alf >= 'a')
		{
			if (*str == alf)
			{
				couter_min = couter_min + 1;
			}
			alf--;
		}
		alf = 'z';
		couter = couter + 1;
		str++;
	}
	lagabetos(couter, couter_min, &ret);
	return (ret);
}

int	ft_str_is_lowercase(char *str)
{
	int	couter;
	int	couter_min;
	int	alf;
	int	ret;

	ret = 0;
	couter = 0;
	couter_min = 0;
	alf = 'z';
	ret = alfa(alf, str, ret);
	return (ret);
}
/*
int	main(void)
{
	char ok[50]="vamos la";
	
	int retur;
	retur = ft_str_is_lowercase(ok);
	retur = retur + '0';
	write(1,&retur,1);

}*/
