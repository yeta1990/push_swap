/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:21:35 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/08 23:46:18 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_sorted(int *a, int size, int top_a);

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
	while (ft_is_sorted(a, argc, top_a) != 1)
	{
		if (top_a < argc - 1 && a[top_a] > a[top_a + 1])
			ft_sa(a, &top_a);
		else if (top_b < argc - 1 && a[top_a] > b[top_b])
			ft_pb(a, b, &top_a, &top_b);
		else if (top_b == argc - 1 && a[top_a] < a[top_a + 1])
			ft_pb(a, b, &top_a, &top_b);
		else if (top_a < argc - 1 && a[top_a] > a[top_b + 1])
			ft_pa(a, b, &top_a, &top_b);
		
//	printf("top a: %i\n", top_a);
//	printf("top b: %i\n", top_b);
	}
	printf("top a: %i\n", top_a);
	printf("top b: %i\n", top_b);

	i = 0;
	while (i < argc - 1)
	{
		printf("%i\n", a[i]);
		i++;
	}
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
