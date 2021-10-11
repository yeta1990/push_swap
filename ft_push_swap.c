/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:42:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/11 20:58:45 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	int			i;
	t_list**	a;
	i = 2;
	
	a = malloc(sizeof(t_list));
	*a = ft_lstnew(ft_atoi(argv[1]));
	while (i < argc)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	printf("size: %i", ft_lstsize(*a));
	printf("\nsorted: %i", ft_is_sorted(a));
	ft_sa(a);
	ft_print_stack(a);
	free(a);
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

void	ft_print_stack(t_list **a)
{
	t_list *aux;
	aux = *a;
	while (aux)
	{
		printf("\n%i", aux->content);
		aux = aux->next;
	}
}
