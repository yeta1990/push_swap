/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:54:01 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 13:37:12 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	**a;
	t_list	**b;

	a = malloc(sizeof(t_list));
	if (!a)
		return (0);
	b = malloc(sizeof(t_list));
	if (!b)
		return (0);
	ft_create_and_read(a, b, argc, argv);
	if (ft_is_sorted(a) && ft_lstsize(*b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
	system("leaks checker");
}

void	ft_map_positions(t_list **a)
{
	t_list	*aux;

	aux = *a;
	while (aux)
	{
		ft_sum_one(a, aux->content);
		aux = aux->next;
	}
}

void	ft_sum_one(t_list **a, int num)
{
	t_list	*aux;
	int		same;

	aux = *a;
	same = 0;
	while (aux)
	{
		if (aux->content == num && !same)
			same = 1;
		else if (aux->content == num && same)
			ft_throw_error();
		if (aux->content >= num)
			aux->position++;
		aux = aux->next;
	}
}

int	ft_is_sorted(t_list **a)
{
	t_list	*aux;

	aux = *a;
	if (ft_lstsize(*a) == 1 || ft_lstsize(*a) == 0)
		return (-1);
	while (aux->next)
	{
		if (aux->content < aux->next->content)
			aux = aux->next;
		else
			return (0);
	}
	return (1);
}

int	ft_is_sorted_rev(t_list **a)
{
	t_list	*aux;

	aux = *a;
	if (ft_lstsize(*a) == 1 || ft_lstsize(*a) == 0)
		return (-1);
	while (aux->next)
	{
		if (aux->content > aux->next->content)
			aux = aux->next;
		else
			return (0);
	}
	return (1);
}
