/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:29:25 by jperpect          #+#    #+#             */
/*   Updated: 2024/01/15 08:25:02 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	vaz;
	int	temp;

	temp = 0;
	size--;
	while (size >= temp)
	{
		vaz = tab[size];
		tab[size] = tab[temp];
		tab[temp] = vaz;
		temp++;
		size--;
	}
}
/*  
int	main(void)
{
	int	size;

	size = 4;
	int	tabs[4]  = {0 ,1 ,2 ,3};
	
	ft_rev_int_tab(tabs,size);
	int temp = 0;
	while(temp < size)
	{
		tabs[temp] = tabs[temp] + '0'; 
		write(1, &tabs[temp],1);
		tabs[temp] = tabs[temp] - '0';
		temp++;
	}
}*/
