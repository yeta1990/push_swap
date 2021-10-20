/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_logic_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:22:47 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 13:25:07 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "get_next_line.h"

void	ft_create_and_read(t_list **a, t_list **b, int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	*a = 0;
	*b = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][++j])
		{
			if (argv[i][j] == 32)
			{
				j = -1;
				break ;
			}
		}
		if (j == 0 || (j > 0 && argv[i][j - 1] == '-'))
			ft_throw_error();
		else
			ft_parse_and_add(a, argv[i]);
		i++;
	}
	ft_map_positions(a);
	ft_read_and_sort(a, b);
}

void	ft_read_and_sort(t_list **a, t_list **b)
{
	char	*instruction;

	instruction = get_next_line(0);
	while (instruction)
	{
		if (ft_memcmp(instruction, "rra", 3) == 0)
			ft_rra(a);
		else if (ft_memcmp(instruction, "rrb", 3) == 0)
			ft_rrb(b);
		else if (ft_memcmp(instruction, "rrr", 3) == 0)
			ft_rrr(a, b);
		else if (ft_memcmp(instruction, "sa", 2) == 0)
			ft_sa(a);
		else if (ft_memcmp(instruction, "sb", 2) == 0)
			ft_sb(b);
		else if (ft_memcmp(instruction, "ss", 2) == 0)
			ft_ss(a, b);
		else if (ft_read_and_sort2(instruction, a, b) == 1)
			 ;
		else
			ft_throw_error();
		free(instruction);
		instruction = get_next_line(0);
	}
}

int	ft_read_and_sort2(char *instruction, t_list **a, t_list **b)
{
	if (ft_memcmp(instruction, "pa", 2) == 0)
		ft_pa(a, b);
	else if (ft_memcmp(instruction, "pb", 2) == 0)
		ft_pb(a, b);
	else if (ft_memcmp(instruction, "ra", 2) == 0)
		ft_ra(a);
	else if (ft_memcmp(instruction, "rb", 2) == 0)
		ft_rb(b);
	else if (ft_memcmp(instruction, "rr", 2) == 0)
		ft_rr(a, b);
	else
		return (0);
	return (1);
}

void	ft_parse_and_add(t_list **a, char *str)
{
	ft_spaces_error(str);
	while (*str)
	{
		while (*str == 32)
			str++;
		if (ft_strlen(str) == 1 && str[0] == '-')
			ft_throw_error();
		if (ft_strlen(str) > 0)
			ft_lstadd_back(a, ft_lstnew(ft_atoi(str)));
		if (*str == '-' || *str == '+')
		{
			if ((*(str - 1)) && *(str - 1) != 32)
				ft_throw_error();
			str++;
		}
		while (*str >= '0' && *str <= '9')
			str++;
	}
}
