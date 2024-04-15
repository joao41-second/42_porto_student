/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:39:33 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/29 15:23:32 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	len(char *ok)
{
	int	i;

	i = 0;
	while (ok[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*alco;
	int		i;
	int		al;

	i = 0;
	al = len(src) + 1;
	alco = (char *)malloc(al * sizeof(char));
	if (alco == NULL)
		return (NULL);
	while (src[i])
	{
		alco[i] = src[i];
		i++;
	}
	alco[i] = '\0';
	return (alco);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*oks;
	int					i;

	i = 0;
	oks = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (oks == NULL)
		return (NULL);
	while (i <= ac - 1)
	{
		oks[i].size = len(av[i]);
		oks[i].str = av[i];
		oks[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (oks);
}
/*
int	main(void)
{
	int i = 0;
	int pal = 3;
	char *ko[] = {"ok","vamos","la"};

	struct s_stock_str  *test =  ft_strs_to_tab(pal,ko );

	while(i <= 3 ){
	printf("%d""%s" , test[i].size ," " );
	printf("%s""%s" , test[i].str ," " );
	printf("%s""%s" , test[i].copy ,"\n" );
	i++;
	}
}*/
