/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci </var/spool/mail/albgarci>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:59:03 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/18 15:51:41 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*aux;
	t_list	*aux_next;

	aux = *lst;
	while (aux)
	{
		aux_next = aux->next;
		free(aux);
		aux = aux_next;
	}
	*lst = NULL;
}
