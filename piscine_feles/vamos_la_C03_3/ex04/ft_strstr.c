/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:01:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/19 12:19:24 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	valid(char *str1, char *str2, int conta2 )
{
	int	conta;

	conta = 0;
	while (conta < conta2)
	{
		if (str1[conta] != str2[conta])
		{
			return (0);
		}
		conta++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	conta2;
	int	valida;

	if (to_find[0] == 0)
	{
		return (str);
	}
	conta2 = ft_strlen(to_find);
	while (*str)
	{
		if (*str == to_find[0])
		{
			valida = valid(str, to_find, conta2);
			if (valida)
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[1000] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char pes[] = "";
  	
        char *teste = ft_strstr(str,pes);
	
	int conta;
	conta = 0;
	while(*teste)
	{
		write(1,teste,1);
		teste++;
	}

}*/
