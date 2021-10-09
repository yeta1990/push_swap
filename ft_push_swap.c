/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:21:35 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/09 14:32:22 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 2 1 3 6 5 8 working
// 2 1 3 -6 5 8 7 4 not working

#include "ft_push_swap.h"

int	ft_is_sorted(int *a, int size, int top_a);
void	ft_print_stack(int *st, int top, int size, char stack);

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
	
	if (a[top_a] > a[top_a + 1])
		ft_sa(a, &top_a);
	ft_pb(a, b, &top_a, &top_b);
	while (ft_is_sorted(a, argc, top_a) != 1)
	{
		if (a[top_a] < b[top_b])
		{
			ft_pb(a, b, &top_a, &top_b);
		//	ft_print_stack(a, top_a, argc - 1, 'a');
		//	ft_print_stack(b, top_b, argc - 1, 'b');
			ft_sb(b, &top_b);
			ft_pa(a, b, &top_a, &top_b);
			if (top_b < argc - 1 && b[top_b] < b[top_b + 1])
				ft_sb(b, &top_b);
		//	ft_print_stack(a, top_a, argc - 1, 'a');
		//	ft_print_stack(b, top_b, argc - 1, 'b');
		}
		else if (a[top_a] > b[top_b] && top_b < argc - 1)
			ft_pb(a, b, &top_a, &top_b);
	//	ft_print_stack(a, top_a, argc - 1, 'a');
	//	ft_print_stack(b, top_b, argc - 1, 'b');
		if (top_a == argc - 1)
			break ;
	}
	ft_print_stack(a, top_a, argc - 1, 'a');
	ft_print_stack(b, top_b, argc - 1, 'b');

	//printf("top a: %i\n", top_a);
	//printf("top b: %i\n", top_b);
	free(a);
	free(b);
}

int	ft_is_sorted(int *a, int size, int top_a)
{
	int	i;

	i = 1;
	if (!a) 
		return (-1);
	if (size == 1)
		return (1);
	if (top_a != 0)
		return (0);
	while (i < size - 1)
	{
		if (a[i] > a[i - 1])
		{
//			printf("\nyes");
//			printf("->%i, %i", a[i - 1], a[i]);
			i++;
		}
		else
		{
//			printf("no");
//			printf("->%i", a[i]);
			return (0);
		}
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
