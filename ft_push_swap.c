/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:42:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/18 16:34:58 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.interviewcake.com/concept/java/bit-shift
//https://bitwisecmd.com/
//https://codeforwin.org/2016/01/c-program-to-check-lsb-of-number.html

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	**a;
	t_list	**b;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	ft_create_and_sort(a, b, argc, argv);
	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
//	system("leaks push_swap");
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
		{
			write(1, "Error\n", 6);
			ft_lstclear(a);
			exit(1);
		}
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

void	ft_print_stack(t_list **a)
{
	t_list *aux;
	aux = *a;
	while (aux)
	{
		printf("Content: %i\n", aux->content);
		printf("Position: %i\n", aux->position);
//		write(1, "Bin pos: ", 9);
//		ft_putnbr_base(aux->position, "01");
		write(1, "\n\n", 2);
	/*	write(1, "\nBin right shift 2: ", 20);
		ft_putnbr_base(aux->position >> 2, "01");
		printf("\nLSB: %i", (aux->position >> 2) & 1);
		printf("\nContent right shift %i\n\n", aux->position >> 1);
	*/	aux = aux->next;
	}
}
