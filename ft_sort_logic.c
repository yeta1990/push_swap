/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_logic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:22:47 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/19 01:28:48 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_create_and_sort(t_list **a, t_list **b, int argc, char **argv)
{
	int	bit;
	int	i;

	i = 1;
	bit = 0;
	*a = 0;
	*b = 0;
	while (i < argc)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	ft_map_positions(a);
	if (ft_is_sorted(a))
		 ;
	else if (ft_lstsize(*a) > 5)
	{
		while (ft_is_sorted(a) == 0)
		{
			ft_radix_pb(a, b, bit);
			ft_radix_pa(a, b, bit);
			bit++;
		}
	}
	else if (ft_lstsize(*a) > 3)
		ft_sort_five(a, b);
	else
		ft_sort_three(a);
//	if (ft_is_sorted(a) == 1 && ft_lstsize(*b) == 0)
//		write(1, "\nSorted!\n", 9);
}

void	ft_radix_pb(t_list **a, t_list **b, int bit)
{
	int	i;
	int	j;
	int	z;

	j = ft_lstsize(*a);
	i = 0;
	while (i < j)
	{
		z = ft_calc_bits(ft_lstsize(*a));
		if (bit == z && ft_is_sorted(a) && ft_is_sorted_rev(b))
			break ;
		if ((((*a)->position >> bit) & 1) == 0)
			ft_pb(a, b);
		else
			ft_ra(a);
		i++;
	}
}

void	ft_radix_pa(t_list **a, t_list **b, int bit)
{
	int	p;
	int	z;

	p = 0;
	z = ft_lstsize(*b);
	if (bit < ft_calc_bits(ft_lstsize(*a)) - 1)
	{
		while (p < z)
		{
			if ((((*b)->position >> (bit + 1)) & 1) == 1)
				ft_pa(a, b);
			else
				ft_rb(b);
			p++;
		}
	}
	else
		while (ft_lstsize(*b) > 0)
			ft_pa(a, b);
}

int	ft_calc_bits(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		i++;
		num /= 2;
	}
	return (i);
}
