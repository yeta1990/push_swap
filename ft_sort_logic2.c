/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_logic2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:39:10 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/19 02:26:15 by albgarci         ###   ########.fr       */
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
//	ft_print_stack(a);

		if ((*b)->position > (*b)->next->position)
			ft_sb(b);
//	ft_print_stack(b);
		while ((*b) && (*b)->position < (*a)->position)
			ft_pa(a, b);

//	ft_print_stack(a);
		while (ft_lstsize(*b) > 1)
		{
			if ((*b)->position < (*a)->position && (*b)->position > ft_lstlast(*a)->position)
				ft_pa(a, b);
			else
				ft_ra(a);
		}
		while (ft_lstsize(*b) > 0)
		{
			if ((*b)->position < (*a)->position && (*b)->position > ft_lstlast(*a)->position)
				ft_pa(a, b);
			else
				ft_rra(a);
		}
	
		while (ft_is_sorted(a) != 1)
			ft_rra(a);
//	ft_print_stack(a);

	/*	while ((*b) && (*b)->position < (*a)->position)
			ft_pa(a, b);
		*/
	/*	if ((*b)->position < (*a)->position)
			ft_pa(a, b);
		else
		{
			while ((*b)->position > (*a)->position)
				ft_ra(a);
			ft_pa(a, b);
			while ((*b)->position > (*a)->position)
				ft_ra(a);
			ft_pa(a, b);
			while (ft_is_sorted(a) == 0)
				ft_ra(a);
		}*/
	}
	else if (ft_lstsize(*a) == 4)
	{
		ft_pb(a, b);
		while ((*b)->position > (*a)->position)
			ft_ra(a);
		ft_pa(a, b);
		while (ft_is_sorted(a) == 0)
			ft_ra(a);
	}
}

void	ft_sort_three(t_list **a)
{
	if (ft_lstsize(*a) == 3)
	{
	//	ft_print_stack(a);
		if ((*a)->position > (*a)->next->position)
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
		else
		{
			if ((*a)->position < (*a)->next->next->position)
			{
				ft_ra(a);
				ft_sa(a);
				ft_rra(a);
			}
			else if ((*a)->position > (*a)->next->next->position)
				ft_rra(a);
		}

		/*
		if ((*a)->position == 0 && (*a)->next->position == 2)
		{
			ft_ra(a);
			ft_sa(a);
			ft_rra(a);
		}
		else if ((*a)->position == 1 && (*a)->next->position == 2)
			ft_rra(a);
		else if ((*a)->position == 1 && (*a)->next->position == 0)
			ft_sa(a);
		else if ((*a)->position == 2 && (*a)->next->position == 1)
		{
			ft_sa(a);
			ft_rra(a);
		}
		else if ((*a)->position == 2 && (*a)->next->position == 0)
			ft_ra(a);*/
	}
	else if (ft_lstsize(*a) == 2)
		ft_sa(a);
}
