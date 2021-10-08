/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:13:06 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/08 23:47:17 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(int *a, int *top_a)
{
	int	swap;
	
	printf("\ntop a:%i", *top_a);
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
	if (*top_b >=0)
	{
		b[(*top_b - 1)] = a[*top_a];
		*top_b -= 1;
		*top_a += 1;
		write(1, "pb\n", 3);
	}
}
