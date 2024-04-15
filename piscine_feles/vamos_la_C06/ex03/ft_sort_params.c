/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:20:29 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/25 11:28:47 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	lista;

	lista = 0;
	while (*s1 || *s2)
	{
		lista = *s1 - *s2;
		if (lista == 0)
		{
		}
		else
		{
			return (lista);
		}
		s1++;
		s2++;
	}
	return (lista);
}

void	prit(int argc, char **argv)
{
	int	conta;

	conta = 1;
	while (conta < argc)
	{
		print(argv[conta]);
		write(1, "\n", 1);
		conta++;
	}
}

int	main(int argc, char **argv)
{
	int		l1;
	int		l2;
	char	*var;

	l1 = 0;
	while (l1 < argc - 1)
	{
		l2 = 0;
		while (l2 < argc - 1)
		{
			if (ft_strcmp(argv[l2], argv[l2 + 1]) > 0)
			{
				var = argv[l2];
				argv[l2] = argv[l2 + 1];
				argv[l2 + 1] = var;
			}
			else
				l2++;
		}
		l1++;
	}
	prit(argc, argv);
}
