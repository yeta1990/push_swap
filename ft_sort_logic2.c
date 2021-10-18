/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_logic2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:39:10 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/18 16:53:36 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_five(t_list **a, t_list **b, int argc, char **argv)
{
	argv = 0;
	
	if (argc == 6)
	{
		b = 0;
		ft_pb(a, b);
		ft_pb(a, b);
		ft_sort_three(a, argc, argv);
		ft_sort_three(b, argc, argv);
		ft_pa(a, b);
		ft_pa(a, b);
	}
	else if (argc == 5)
	{
		a = 0;
	}
}

void	ft_sort_three(t_list **a, int argc, char **argv)
{
	argv = 0;
	b = 0;
	
	if (argc == 4)
	{
		
	}
	else if (argc == 3)
	{
		ft_sa(a);
	}
}
