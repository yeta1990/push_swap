/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:50:34 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 12:58:52 by albgarci         ###   ########.fr       */
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
	}
	else
		ft_throw_error();
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
	}
	else
		ft_throw_error();
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
	}
	else
		ft_throw_error();
}
