/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handlers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:28:23 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 02:18:07 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_throw_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_spaces_error(char *str)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (str[i])
		if (str[i++] == 32)
			j++;
	if (j == ft_strlen(str))
		ft_throw_error();
}
