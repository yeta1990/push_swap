/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:50:44 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/11 21:07:05 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(t_list **a)
{
	t_list	*aux;
	
//	(*a)->next = 0;
	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		*a = aux->next;
		(*a)->next = aux;
	}
}
