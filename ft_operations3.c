/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:50:34 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/11 23:55:02 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rra(t_list **a)
{
	t_list	*aux;
	t_list	*aux2;

	if (ft_lstsize(*a) > 1)
	{
		aux = ft_lstlast(*a);
		aux2 = *a;
		while (aux2->next && aux2->next->next)
			aux2 = aux2->next;
		aux2->next = 0;
		ft_lstadd_front(a, aux);
		write(1, "rra\n", 4);
	}
}

void	ft_rrb(t_list **a)
{
	t_list	*aux;
	t_list	*aux2;

	if (ft_lstsize(*a) > 1)
	{
		aux = ft_lstlast(*a);
		aux2 = *a;
		while (aux2->next && aux2->next->next)
			aux2 = aux2->next;
		aux2->next = 0;
		ft_lstadd_front(a, aux);
		write(1, "rrb\n", 4);
	}
}

void	ft_rrr(t_list **a, t_list **b)
{
	t_list	*aux;
	t_list	*aux2;

	if (ft_lstsize(*a) > 1 && ft_lstsize(*b) > 1)
	{
		aux = ft_lstlast(*a);
		aux2 = *a;
		while (aux2->next && aux2->next->next)
			aux2 = aux2->next;
		aux2->next = 0;
		ft_lstadd_front(a, aux);
		aux = ft_lstlast(*b);
		aux2 = *b;
		while (aux2->next && aux2->next->next)
			aux2 = aux2->next;
		aux2->next = 0;
		ft_lstadd_front(b, aux);
		write(1, "rrr\n", 4);
	}
}
