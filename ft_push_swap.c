/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:42:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/12 20:08:09 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	int			i;
	t_list**	a;
	t_list**	b;
	i = 2;
	
	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	*a = ft_lstnew(ft_atoi(argv[1]));
	*b = 0;
	while (i < argc)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	ft_sort_stack(a, b);

	printf("a stack:\n");
	ft_print_stack(a);
	printf("b stack:\n");
	ft_print_stack(b);

	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
//	system("leaks push_swap");
}
void	ft_sort_stack(t_list **a, t_list **b)
{
	
	ft_pa(a, b);
	while (ft_lstsize(*a))
//	while ((ft_is_sorted(a) != 1 && ft_is_sorted_rev(b) != 1))// || ft_lstsize(*a))
	{
//		ft_pa(a, b);
	//	write(1, "l\n", 2);
		while (ft_lstsize(*b) && ft_lstsize(*a) && (*b)->content > (*a)->content)
		{
	//		write(1, "a\n", 2);
			if (ft_is_sorted(a) == 1 && ft_is_sorted_rev(b) == 1)
				break ;
			if ((*b)->content > (*a)->content)
			{
				ft_pa(a, b);
				ft_sb(b);
				ft_pb(a, b);
			}
			else
			{
				ft_pa(a, b);
//				ft_sa(b);
			//	ft_rra(a);
			}
			while (ft_is_sorted_rev(b) != 1 && ft_lstsize(*b) > 2)// && ft_lstsize(*a) != 1)
			{
				write(1, "pepe\n", 5);
				ft_sb(b);
				ft_pb(a, b);
			}
		}
		if (ft_is_sorted(a) == 1 && ft_is_sorted_rev(b) == 1)
			break ;
		if (ft_lstsize(*b) == 1 && (*a)->content > (*b)->content)
			ft_pb(a, b);
		else if (ft_lstsize(*b) && (*a)->content > (*b)->content)
			ft_pa(a, b);

	//	printf("a stack:\n");
	//	ft_print_stack(a);
	//	printf("b stack:\n");
	//	ft_print_stack(b);
	}
	while (ft_lstsize(*b))
		ft_pb(a, b);
//	b = 0;

}

int	ft_is_sorted(t_list **a)
{
	t_list *aux;
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
	t_list *aux;
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

void	ft_print_stack(t_list **a)
{
	t_list *aux;
	aux = *a;
	while (aux)
	{
		printf("%i\n", aux->content);
		aux = aux->next;
	}
}
