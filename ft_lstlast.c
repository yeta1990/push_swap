/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci </var/spool/mail/albgarci>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:04:24 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/11 20:12:10 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return (0);
	aux = lst;
	while (aux->next)
		aux = aux->next;
	return (aux);
}
