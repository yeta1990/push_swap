/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:29:59 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/09 23:42:26 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_sa(int *a, int *top_a);
void	ft_sb(int *b, int *top_b);
void	ft_pa(int *a, int *b, int *top_a, int *top_b);
void	ft_pb(int *a, int *b, int *top_a, int *top_b);
int		ft_is_sorted(int *a, int size, int top_a);
int		ft_is_sorted_b(int *b, int size, int top_b);
void	ft_ra(int *a, int top_a, int size);
void	ft_rb(int *b, int top_b, int size);
void	ft_rra(int *a, int top_a, int size);
void	ft_rrb(int *b, int top_b, int size);

#endif
