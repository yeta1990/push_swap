/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:50:44 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/17 01:51:07 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(t_list **a)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = (*a)->next;
		(*a)->next = aux;
		write(1, "sa\n", 3);
	}
}

void	ft_sb(t_list **a)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = (*a)->next;
		(*a)->next = aux;
		write(1, "sb\n", 3);
	}
}

void	ft_ss(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1 && ft_lstsize(*b) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = (*a)->next;
		(*a)->next = aux;
		aux = *b;
		*b = (*b)->next;
		aux->next = (*b)->next;
		(*b)->next = aux;
		write(1, "ss\n", 3);
	}
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 0)
	{
		aux = *a;
		*a = (*a)->next;
		ft_lstadd_front(b, aux);
		write(1, "pb\n", 3);
	}
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*b) > 0)
	{
		aux = *b;
		*b = (*b)->next;
		ft_lstadd_front(a, aux);
		write(1, "pa\n", 3);
	}
}
