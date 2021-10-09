/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:13:06 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/09 21:52:26 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(int *a, int *top_a)
{
	int	swap;

	swap = a[*top_a];
	a[*top_a] = a[*top_a + 1];
	a[*top_a + 1] = swap;
	write(1, "sa\n", 3);
}

void	ft_sb(int *b, int *top_b)
{
	int	swap;
	
	
	swap = b[*top_b];
	b[*top_b] = b[*top_b + 1];
	b[*top_b + 1] = swap;
	write(1, "sb\n", 3);
}

void	ft_pa(int *a, int *b, int *top_a, int *top_b)
{
	if (*top_a >= 0)
	{
		a[(*top_a - 1)] = b[*top_b];
		*top_b += 1;
		*top_a -= 1;
		write(1, "pa\n", 3);
	}
}


void	ft_pb(int *a, int *b, int *top_a, int *top_b)
{
	if (*top_b >= 0)
	{
		b[(*top_b - 1)] = a[*top_a];
		*top_b -= 1;
		*top_a += 1;
		write(1, "pb\n", 3);
	}
}

void	ft_ra(int *a, int top_a, int size)
{
	int	swap;
	int	i;

	i = top_a;
	swap = a[i];
	while (i < size - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[size - 1] = swap;
	write(1, "ra\n", 3);
}

void	ft_rb(int *b, int top_b, int size)
{
	int	swap;
	int	i;

	i = top_b;
	swap = b[i];
	while (i < size - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[size - 1] = swap;
	write(1, "ra\n", 3);
}

void	ft_rra(int *a, int top_a, int size)
{
	int	swap;
	int	i;

	i = size - 1;
	swap = a[size - 1];
	while (i > top_a)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[top_a] = swap;
	write(1, "rra\n", 4);
}

void	ft_rrb(int *b, int top_b, int size)
{
	int	swap;
	int	i;

	i = size - 1;
	swap = b[size - 1];
	while (i > top_b)
	{
		b[i] = b[i - 1];
		i++;
	}
	b[top_b] = swap;
	write(1, "rrb\n", 4);
}
