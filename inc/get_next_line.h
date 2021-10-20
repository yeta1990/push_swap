/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:29:39 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/20 11:55:34 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_push_swap.h"

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_c(const char *s, int c);
void	ft_bzero(void *s, unsigned long n);
char	*ft_first_read(int fd, char *lft);
int		ft_read_loop(int fd, char **lft);
char	*ft_create_line(char **lft);

#endif
