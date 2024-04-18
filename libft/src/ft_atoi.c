/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:15:45 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/16 10:37:54 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int v_nb(int c )
{
	if (c >= '0' && c <= '9' )
		return(1);
	else
		return(0);   
}
static int sinals(int n,int sinal)
{
    if(sinal == 0)
     return(-n);
    return(n);
}
int ft_atoi(const char *nptr)
{
    int cont;
    int arit;
    int sinal;
    int n;
    n =0;
    sinal = 0;
    cont = 0;
    while(ft_isalnum(nptr[cont]) == 0 )
    {
        if (nptr[cont] == '+')
            arit=1; 
        else if (nptr[cont] == '-')
            arit=0;
        if (nptr[cont] == '-' || nptr[cont] == '+')
            sinal++;
        cont++;
    }
    if (sinal > 1)
    return(0);
    while(v_nb(nptr[cont])== 1)
    {
     n = n * 10 + (nptr[cont] - '0');
     cont ++;
    }
    return (sinals(n,arit));
}


/*
int main (int ac , char **av )
{
    printf("%d\n",atoi(av[1]));
    printf("%d", ft_atoi(av[1])); 
} */