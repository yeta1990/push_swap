/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:42:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/11 23:52:08 by albgarci         ###   ########.fr       */
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

//argc = 0;
//	printf("size: %i", ft_lstsize(*a));
//	printf("\nsorted: %i\n", ft_is_sorted(a));
	ft_pa(a, b);
	ft_pa(a, b);
//	ft_pa(a, b);
	ft_ra(b);
	ft_rb(b);
	ft_rr(a, b);
	ft_print_stack(a);
	ft_print_stack(b);

	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
//	system("leaks push_swap");
}

int	ft_is_sorted(t_list **a)
{
	t_list *aux;
	aux = *a;
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
