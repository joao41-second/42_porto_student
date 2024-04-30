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
        if (s[i] == c && s[i - 1] != c)
            cont++;
        i++;
    }
    printf("%d\n", cont);
    return (cont+1);
}

static void conta_len(char const *s,char c,char **ren)
{
    int i;
    int cont;
    int len;
    len =-1;
    i = 0;
    cont = 0;
    while(s[i] != '\0')
    {
        len++;
        if (s[i] == c && s[i +1] != c)
        {
            printf("%d\n", len);
            if (len == 0)
                cont++;
            len = 0;
        }
        
        i++;
    }
    
 
}




char **ft_split(char const *s, char c)
{
    int c_n;
    char *ren;
    int *lens;
    int cant;
    cant = 0;
    c_n = conta(s,c);
    ren = (char *)malloc(c_n * sizeof(char ));
    if (ren = NULL)
        return NULL;
    while(c_n  > cant){
        printf("%d" ,cant);
        ren[cant] = 'a';
    cant++;}

    //conta_len(s ,c,ren);
    
    
  

}

int main(int ac,char **av)
{
    int conta = 0;
    char ok [5][100] = {
        "ola","mundo"
    } ;
    char on =  ' ';
    char **ret;
     ft_split(" vamos la para ",on);

//    while(*ret)
   // {
       //  printf("%s\n", ret++);
    //}
  
}