/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:27:13 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/22 16:50:13 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	r;

	r = 0;
	while (src[r])
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void) {
	
  char str1[100] = "CzXrpBuqkcyFyiXRGHfKekTYaWaQbMtZObSjD";
  char str2[100] = "";

  // copying str1 to str2
  ft_strcpy(str2, str1);
  ft_putstr(str2);

  return 0;
}*/
