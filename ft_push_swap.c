/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:42:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/18 00:31:11 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"


//https://www.interviewcake.com/concept/java/bit-shift
//https://bitwisecmd.com/
//https://codeforwin.org/2016/01/c-program-to-check-lsb-of-number.html
//not working: 1 3 2 -1 or 1 3 2 4
// working: 1 3 2 7 9 20 21



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
//	printf("\na stack:\n");
	
	t_list *aux;
	aux = *a;
	i = 0;
//	int j = 1;
	//ft_print_stack(a);
	
	while (ft_is_sorted(a) == 0)
	{
//		i = 0;
	//	while (i < ft_lstsize(*a))
		while ((*a) && ft_zero_left(a, i) == 1)
		{
		/*	if ((((*a)->position >> i) & 1) == 1)
				ft_ra(a);
			else
				ft_pb(a, b);*/

			if ((((*a)->position >> i) & 1) == 0)
			{
				ft_pb(a, b);
				if (ft_lstsize(*b) > 1 && (*b)->content < (*b)->next->content)
					ft_sb(b);
		/*		if (ft_lstsize(*b) == 3 && (*b)->content > (*b)->next->content && (*b)->next->content < (*b)->next->next->content)
				{
					ft_sb(b);
					ft_rrb(b);
				}*/
		//		if (ft_lstsize(*a) > ft_lstsize(*b) && (*a)->content > (*a)->next->content)		
		//			ft_sa(a);

			}
			else
				ft_ra(a);

		//	i++;
		//	printf("e");
		}

		if (i == 0)
		{
			while ((*b) && ft_ones_left(b, 1) == 1)
			{
				break ;
			}
		}
			
		while (ft_lstsize(*b) > 0)
		{
			ft_pa(a, b);
		}
		i++;

	/*	if (i > 3)
			break ;
	*/}
	ft_pa(a, b);
	printf("\ni: %i", i);
	if (ft_is_sorted(a) == 1 && ft_lstsize(*b) == 0)
		printf("\nSorted!\n");
//	ft_print_stack(a);
//	printf("b stack:\n");
//	ft_print_stack(b);

	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
//	system("leaks push_swap");
}

int	ft_zero_left(t_list **a, int i)
{
	t_list *aux;

	aux = *a;
	while (aux)
	{
		if ((((aux)->position >> i) & 1) == 0)
			return (1);
		aux = aux->next;
	}
	return (0);
}


int	ft_ones_left(t_list **b, int i)
{
	t_list *aux;

	aux = *b;
	while (aux)
	{
		if ((((aux)->position >> i) & 1) == 1)
			return (1);
		aux = aux->next;
	}
	return (0);
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
/*
	aux = *a;
	while (aux)
	{
		aux->position--;
		aux = aux->next;
	}
*/
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
		printf("Position: %i\n", aux->position);
		write(1, "Bin pos: ", 9);
		ft_putnbr_base(aux->position, "01");
		write(1, "\n\n", 2);
	/*	write(1, "\nBin right shift 2: ", 20);
		ft_putnbr_base(aux->position >> 2, "01");
		printf("\nLSB: %i", (aux->position >> 2) & 1);
		printf("\nContent right shift %i\n\n", aux->position >> 1);
	*/	aux = aux->next;
	}
}
