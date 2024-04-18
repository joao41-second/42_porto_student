/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:14:13 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/18 09:22:33 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    i = 0;
    while(*s)
    {
        f(i++,s++);    
    }
}

void zb( int n,char *s)
{
	int cont;
	char *str;
	cont = 0;
	str = (char *) s;
	while(cont <= n)
	{
		str[cont] ='a'; 
		cont++;
	}

}


int main(int ac,char **av)
{
    char ok[100] = "ola mundo";
    ft_striteri(ok,zb);
    print(ok);
}