/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:41:17 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/19 09:28:28 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	carat;

	carat = 0;
	while (*s1 || *s2)
	{
		carat++;
		if (n == 0)
		{
			return (0);
		}
		if (carat != n)
		{
			if (*s1 != *s2) 
			{
				return (*s1 - *s2);
			}
		}
		else
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[]="Hello";
	char str2[]="World";
	unsigned int r  = 0;

	int reurn;
	reurn = ft_strncmp(str1,str2,r);
	printf( "%d", reurn);

}*/
