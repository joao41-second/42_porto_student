/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:10:05 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/15 16:16:04 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		co;
	char	*p;
	char	*ret;

	co = 0;
	while (s[co] != '\0')
	{
		if (s[co] == c)
		{
			p = "0";
			break ;
		}
		else
			p = NULL;
		co++;
	}
	if (p == (void *) '\0')
		return (NULL);
	ft_strlcpy(ret, &s[co], ft_strlen(s) - co + 1);
	p = ret;
	return (p);
}
/*
int	main(int ac, char **av)
{
	char	*ok;

	ok = av[1];
	printf("%s \n", ft_strchr(ok, av[2][0]));
	printf("%s", strchr(av[1], av[2][0]));
}*/
