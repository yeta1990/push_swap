/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_logic2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:39:10 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/19 16:49:14 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_five(t_list **a, t_list **b)
{	
	if (ft_lstsize(*a) == 5)
	{
		ft_pb(a, b);
		ft_pb(a, b);
		ft_sort_three(a);
		if ((*b)->position < (*b)->next->position)
			ft_sb(b);
		if ((*b)->position == 0 || ft_lstlast(*a)->position == 2)
			ft_pa(a, b);
		while (ft_lstsize(*b) > 0)
		{
			if ((*b)->position == ((*a)->position) - 1)
				ft_pa(a, b);
			else if ((*b)->position == ft_lstlast(*a)-> position + 1)
				ft_pa(a, b);
			else
				ft_rra(a);
		}
		while (ft_is_sorted(a) != 1)
			ft_rra(a);
	}
	else if (ft_lstsize(*a) == 4)
		ft_sort_four(a, b);
}

void	ft_sort_four(t_list **a, t_list **b)
{
	ft_pb(a, b);
	ft_sort_three(a);
	if ((*b)->position == 3)
	{
		ft_pa(a, b);
		ft_ra(a);
	}
	while (ft_lstsize(*b) == 1 && (*b)->position != (*a)->position - 1)
		ft_ra(a);
	ft_pa(a, b);
	while (ft_is_sorted(a) != 1)
		ft_ra(a);
}

void	ft_sort_three(t_list **a)
{
	if (ft_lstsize(*a) == 3 && (*a)->position > (*a)->next->position)
	{
		if ((*a)->position < (*a)->next->next->position)
			ft_sa(a);
		else if ((*a)->next->position > (*a)->next->next->position)
		{
			ft_sa(a);
			ft_rra(a);
		}
		else if ((*a)->next->position < (*a)->next->next->position)
			ft_ra(a);
	}
	else if (ft_lstsize(*a) == 3)
	{
		if ((*a)->position < (*a)->next->next->position)
		{
			ft_rra(a);
			ft_sa(a);
		}
		else if ((*a)->position > (*a)->next->next->position)
			ft_rra(a);
	}
	else if (ft_lstsize(*a) == 2)
		ft_sa(a);
}
