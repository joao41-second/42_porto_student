/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:02:14 by joao              #+#    #+#             */
/*   Updated: 2024/04/26 10:38:41 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!del)
        return;
    if(lst)
    {
        (*del)(lst->content);
        free(lst);
    }
    
}

/*
static void liber(void *ok)
{
    free(ok);
}

int main(int ac,char **av)
{
	t_list *oa = ft_lstnew(av[1]);
	t_list *ob = ft_lstnew(av[2]);
	t_list *oc = ft_lstnew(av[3]);
	t_list *od = ft_lstnew(av[4]);

	ft_lstadd_back(&oa,ob);
	ft_lstadd_back(&oa,oc);
	ft_lstadd_back(&oa,od);

	
	ft_putnbr_fd(ft_lstsize((oa)),1);
	ft_putchar_fd('\n',1);
	ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);
	
	ft_putchar_fd('\n',1);
	//ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);
	ft_putchar_fd('\n',1);
	
	ft_lstdelone(oa -> next ,liber);

	while( oa != NULL)
	{
		ft_putchar_fd('\n',1);
		ft_putstr_fd(oa->content,1);
		oa = oa-> next;
	}
    free(oa);
}*/