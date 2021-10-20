/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:49:06 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 02:32:30 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_is_space(char c);

int	ft_atoi(char *str)
{
	long int	i;
	long int	num;
	long int	sign;

	i = 0;
	num = 0;
	sign = 1;
	if (ft_strlen(str) == 1 && (str[0] < '0' || str[0] > '9'))
		ft_throw_error();
	while (ft_is_space (str[i]))
		i++;
	sign = ft_get_sign(str[i]);
	if (sign == -1)
		i++;
	if (str[i] < '0' || str[i] > '9')
		ft_throw_error();
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - '0';
		if ((sign == -1 && num > 2147483648) || (sign == 1 && num > 2147483647))
			ft_throw_error();
		i++;
	}
	return (num * sign);
}

static int	ft_is_space(char c)
{
	if (c == ' ' || c == 9 || c == 10 || c == 11 || c == 12 || c == 13)
		return (1);
	return (0);
}

int	ft_get_sign(char s)
{
	if (s == '-' || s == '+')
	{
		if (s == '-')
			return (-1);
	}
	return (1);
}
