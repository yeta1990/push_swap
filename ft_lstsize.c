/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci </var/spool/mail/albgarci>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:00:40 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/11 20:12:24 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		i;

	i = 0;
	aux = lst;
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
