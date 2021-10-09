/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:21:35 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/10 00:47:26 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 2 1 3 6 5 8 working
// 2 1 3 -6 5 8 7 4 working
// -3 -1 3 -2 -20 1 not working

#include "ft_push_swap.h"

int		ft_is_sorted(int *a, int size, int top_a);
void	ft_print_stack(int *st, int top, int size, char stack);
int		ft_is_sorted_b(int *b, int size, int top_b);

int	main(int argc, char *argv[])
{
	int	i;
	int *a;
	int	*b;
	int	top_a;
	int	top_b;

	top_a = 0;
	top_b = argc - 1;
	a = malloc(sizeof(int) * (argc - 1));
	b = malloc(sizeof(int) * (argc - 1));
	if (!a || !b)
		return (1);
	i = 1;
	while (i < argc)
	{
		a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	
	ft_pb(a, b, &top_a, &top_b);
	while (!ft_is_sorted(a, argc, top_a) || !ft_is_sorted_b(b, argc, top_b))
	{
		if (top_a < argc - 2 && a[top_a] > a[top_a + 1])
			ft_sa(a, &top_a);
		if (top_a < argc - 2 && a[argc - 2] < a[top_a])
			ft_rra(a, top_a, argc - 1);
		if (a[top_a] < b[top_b])
		{
			ft_pb(a, b, &top_a, &top_b);
			ft_sb(b, &top_b);
			ft_pa(a, b, &top_a, &top_b);
		}
		if (top_b < argc - 2 && b[top_b] < b[top_b + 1])
			ft_sb(b, &top_b);
		if (a[top_a] > b[top_b] && top_b < argc - 1)
			ft_pb(a, b, &top_a, &top_b);
	}
	while (top_b < argc - 1)
		ft_pa(a, b, &top_a, &top_b);
	ft_print_stack(a, top_a, argc - 1, 'a');
	ft_print_stack(b, top_b, argc - 1, 'b');

	free(a);
	free(b);
}

int	ft_is_sorted(int *a, int size, int top_a)
{
	int	i;

	i = top_a;
	while (i < size - 1)
	{

		if (a[i] > a[i - 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_is_sorted_b(int *b, int size, int top_b)
{
	int	i;

	i = top_b + 1;
	if (top_b <= 0)
		return (1);
	while (i < size - 1)
	{
		if (b[i] < b[i - 1])
			i++;
		else
			return (0);
	}
	return (1);
}


void	ft_print_stack(int *st, int top, int size, char stack)
{
	int	i;

	printf("\n%c\n", stack);
	i = top;
	while (i < size)
	{
		printf("%i\n", st[i]);
		i++;
	}
}
