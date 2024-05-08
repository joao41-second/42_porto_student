/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:10:30 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/08 09:35:40 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>


/* int ft_printf(const char *str, ...)
{	
	int cout ;
	cout = 1;
	va_list args;
    va_start(args, cout);
	
	char *ok = va_arg(args,char*);
	printf("%s",ok);
	char *oks = va_arg(args,char*);
	printf("%s",oks);
 	while(str[cont] != '\0')
	{
		if(str[cont])
		write(1,&str[cont++],1);
	} 
	va_end(args);
	return (0);
} */

static int identifire(char id,va_list args)
{
	if(id == 'c')
		return(ft_putchar_fd( va_arg(args,int ),1));
	else if (id == 's')
		return(ft_putstr_fd(va_arg(args,char *),1));
	else if (id == 'p')
		ft_printp(va_arg(args,unsigned long ));
	else if (id == 'd')
	 	ft_putnbr_fd(va_arg(args,int),1);
	else if (id == 'i')
		ft_putnbr_fd(va_arg(args,int),1);
	else if (id == 'u')
	 ft_putnbr_base(va_arg(args, unsigned   ), "0123456789");
	else if (id == 'x')
	ft_putnbr_base(va_arg(args, unsigned   ), "0123456789abcdef");
	else if (id == 'X')
	ft_putnbr_base(va_arg(args, unsigned   ), "0123456789ABCDEF");
	else if (id == '%')
	ft_putchar_fd( '%',1);
	return(0);
}


int ft_printf(const char *str, ...)
{	
	int cont;
	int add;
	
	add =0;
	cont = 0;
	va_list args;
	va_start(args, str);
	
	while(str[cont] != '\0')
	{
		if(str[cont] == '%')
		{
			add = identifire(str[cont+1],args);
			//ft_putchar_fd(str[cont+1],1);
			if (str[cont+1] != '\0' && str[cont+2] != '\0')
			cont += 2;
			else
				break;
		}
		
		 ft_putchar_fd(str[cont],1);
		cont++;
	}
	va_end(args);
	return (cont +add);
}
int main ()
{
	void *ptr = (char *)0x7ffeefbff710; // Exemplo de ponteiro void *
	
	ft_printf (" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	
}

