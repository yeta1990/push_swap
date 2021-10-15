/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:42:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/15 15:50:19 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"


//https://www.interviewcake.com/concept/java/bit-shift
//https://bitwisecmd.com/

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
//	ft_sort_stack(a, b);
	ft_map_positions(a);
	printf("a stack:\n");
	ft_print_stack(a);
//	printf("b stack:\n");
//	ft_print_stack(b);

	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
//	system("leaks push_swap");
}

/*
 * void	ft_sort_stack(t_list **a, t_list **b)
{
	

}
*/

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

void ft_sum_one(t_list **a, int num)
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
		{
			write(1, "Error\n", 6);
			break ;
		}
		if (aux->content >= num)
		   aux->position++;
		aux = aux->next;
	}
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
		printf("Content: %i\n", aux->content);
		printf("Content right shift %i", aux->content >> 1);
		printf("Position: %i\n\n", aux->position);
		aux = aux->next;
	}
}
