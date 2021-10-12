/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:46:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/12 22:38:23 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	size_t			bin;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
int		ft_is_sorted(t_list **a);
int		ft_is_sorted_rev(t_list **a);
void	ft_print_stack(t_list **a);
void	ft_sa(t_list **a);
void	ft_sb(t_list **a);
void	ft_ss(t_list **a, t_list **b);
void	ft_pa(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);
void	ft_lstclear(t_list **lst);
void	ft_ra(t_list **a);
void	ft_rb(t_list **a);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra(t_list **a);
void	ft_rrb(t_list **a);
void	ft_rrr(t_list **a, t_list **b);
void	ft_sort_stack(t_list **a, t_list **b);
size_t	ft_putnbr_base(size_t nbr, char *base);

#endif
