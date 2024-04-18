/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:24:15 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/17 13:48:16 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int conta(char const *s,char c)
{
    int i;
    int cont;
    i = 0;
    cont = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
            cont++;
        i++;
    }
    return (cont+1);
}

static void conta_len(char const *s,char c,int *dest)
{
    int i;
    int cont;
    int len;
    len =0;
    i = 0;
    cont = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c)
        {
           // printf("%d\n", len);
            dest[cont] = len;
            cont++;
            len = -1;
        }
        len++;
        i++;
    }
    
 
}
static void variab_set(char const *s,char c,char **ret )
{
    
    int i;
    int cont;
    int len;
    len = 0;
    i = 0;
    cont = 0;
    while(s[i] != '\0'  )
    {
        if (s[i] == c)
        {
            ret[cont][len] = '\0';
            cont++;
            len = -1;
        }
        else
        {
            ret[cont][len] = s[i];
        }
		
        len++;
        i++;
    }
	//cont++;
	
	
}

static void *ft_free(int id,int *c, char **b , int c_n)
{
    if(id == 2)
    {
        free(c); 
        free(b); 
    }
    else if( id == 3)
    {
        int cant;
        cant = 0;
        free(c);
        while(cant <= c_n)
        {
            free(b[cant]);
            cant++;
            }
        free(b);      
    }
    
    return(NULL);
};

char **ft_split(char const *s, char c)
{
    int c_n;
    char **ren;
    int *lens;
    int cant;
    cant = 0;
    c_n = conta(s,c);
    ren =  ft_calloc(c_n ,sizeof(char *));
    lens = ft_calloc(c_n,sizeof(int));
    if (lens == NULL  || ren == NULL)
        return(ft_free(2,lens,ren,c_n));
    conta_len(s,c,lens);
    while(cant <= c_n)
    {
        ren[cant] = ft_calloc(lens[cant],sizeof(char));
        if (ren[cant] == NULL)
         return(ft_free(2,lens,ren,c_n));
        cant++;
    }
    variab_set(s,c,ren); 
	ren[c_n][0]= '\0';   
    return(ren);

}
/*
int main(int ac,char **av)
{
    int conta = 0;
    char ok [5][100] = {
        "ola","mundo"
    } ;
    char **ret;
    ret = ft_split(av[1],av[2][0]);

    while(conta < 9)
    {
         printf("%s\n", ret[conta]);
          conta++;
    }
  
}*/