/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:21:35 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/08 13:40:03 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;
	int *a;
	int	*b;

	a = malloc(sizeof(int) * (argc - 1));
	b = malloc(sizeof(int) * (argc - 1));
	i = 1;
	printf("tamaño%i\n", argc);
	while (i < argc)
	{
		a[i - 1] = ft_atoi(argv[i]);
		printf("%i\n", a[i - 1]);
		i++;
	}

	free(a);
	free(b);
}

