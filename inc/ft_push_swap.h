/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:46:53 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 13:23:28 by albgarci         ###   ########.fr       */
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
	int				position;
	size_t			bin;
	struct s_list	*next;
}	t_list;

int		ft_atoi(char *str);
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
void	ft_map_positions(t_list **a);
void	ft_sum_one(t_list **a, int num);
int		ft_calc_bits(int num);
void	ft_radix_pa(t_list **a, t_list **b, int bit);
void	ft_radix_pb(t_list **a, t_list **b, int bit);
void	ft_create_and_sort(t_list **a, t_list **b, int argc, char **argv);
void	ft_create_and_read(t_list **a, t_list **b, int argc, char **argv);
void	ft_sort_three(t_list **a);
void	ft_sort_four(t_list **a, t_list **b);
void	ft_sort_five(t_list **a, t_list **b);
void	ft_parse_and_add(t_list **a, char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_throw_error(void);
void	ft_sort_stack(t_list **a, t_list **b);
void	ft_spaces_error(char *str);
int		ft_get_sign(char s);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_read_and_sort(t_list **a, t_list **b);
int		ft_read_and_sort2(char *instruction, t_list **a, t_list **b);

#endif
