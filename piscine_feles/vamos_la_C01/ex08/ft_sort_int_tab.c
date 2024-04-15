/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:27:21 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/15 12:46:43 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	temp_2;
	int	var;

	temp = 0;
	temp_2 = 0;
	while (temp_2 < size)
	{
		temp = 0;
		while (temp < size)
		{
			if (tab[temp] > tab[temp + 1])
			{
				var = tab[temp + 1];
				tab[temp + 1] = tab[temp];
				tab[temp] = var;
			}
			else
			{
				temp++;
			}
		}
		temp_2++;
	}
}

int	main(void)
{
        int     size;

        size = 9;
        int     tabs[9]  = {5 ,8 ,8,3,0,-6,5,4,7};

        ft_sort_int_tab(tabs,size);
	size--;
        int temp = 0;
        while(temp <= size)
        {
                tabs[temp] = tabs[temp] + '0';
                write(1, &tabs[temp],1);
                tabs[temp] = tabs[temp] - '0';
                temp++;
        }
}
