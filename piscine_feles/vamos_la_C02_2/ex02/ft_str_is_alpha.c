/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:36 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/16 07:56:29 by jperpect         ###   ########.fr       */
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

int	alfa(int alf, int alfm, char *str, int ret)
{
	int	couter;
	int	couter_min;

	couter = 0;
	couter_min = 0;
	while (*str)
	{
		while (alf >= 'a')
		{
			if (*str == alf || *str == alfm)
			{
				couter_min = couter_min + 1;
			}
			alfm--;
			alf--;
		}
		alf = 'z';
		alfm = 'Z';
		couter = couter + 1;
		str++;
	}
	lagabetos(couter, couter_min, &ret);
	return (ret);
}

int	ft_str_is_alpha(char *str)
{
	int	couter;
	int	couter_min;
	int	alf;
	int	alfm;
	int	ret;

	ret = 0;
	couter = 0;
	couter_min = 0;
	alf = 'z';
	alfm = 'Z';
	ret = alfa(alf, alfm, str, ret);
	return (ret);
}
/*
int	main(void)
{
	char ok[5]="";
	int retur;
	retur = ft_str_is_alpha(ok);
	retur = retur + '0';
	write(1,&retur,1);

}*/
