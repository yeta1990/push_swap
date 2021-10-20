/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:48:54 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 12:47:06 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_ra(t_list **a)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		ft_lstadd_back(a, aux);
		*a = (*a)->next;
		aux->next = 0;
	}
	else
		ft_throw_error();
}

void	ft_rb(t_list **a)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		ft_lstadd_back(a, aux);
		*a = (*a)->next;
		aux->next = 0;
	}
	else
		ft_throw_error();
}

void	ft_rr(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1 && ft_lstsize(*b) > 1)
	{
		aux = *a;
		ft_lstadd_back(a, aux);
		*a = (*a)->next;
		aux->next = 0;
		aux = *b;
		ft_lstadd_back(b, aux);
		*b = (*b)->next;
		aux->next = 0;
	}
	else
		ft_throw_error();
}
