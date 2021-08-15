/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:38:38 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 13:24:17 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "stdlib.h"
# include "../ft_printf/includes/ft_printf.h"

void	sort_2(int *a);
void	sort(int *a, int *b, int i);
void	sort_big(int *a, int *b, int i, int count);
void	sort_3(int *a, int i);
int		is_sorted(int *a, int a_size);
void	repet_it(int *a, int items);
int		*sort_a_to_index(int *sorted, int *a, int items, int i);
int		get_index(int number, int items, int *sorted);
int		get_upper(int *a, int i);
int		get_lower(int *a, int i);
int		get_mid_2(int *a, int i, int lower, int mid);
int		get_mid(int *a, int i, int mid);
void	sa(int *num);
void	sb(int *num);
void	rra(int *a, int i);
void	rrb(int *b, int i);
void	ra(int *num, int i);
void	rra_pa(int *a, int i);
void	ra_pb(int *num, int i);
void	rrb_pb(int *b, int i);
void	rb(int *num, int i);
void	rb_pa(int *num, int i);
void	rb_pa(int *num, int i);
void	pb(int *a, int *b, int count, int i);
void	pa(int *a, int *b, int count, int i);
int		get_lower(int *a, int i);
int		get_mid(int *a, int i, int mid);
void	to_the_top_a(int *a, int j, int i);
void	to_the_top_b(int *b, int j, int i);
void	push_swap(char **argv, int i);

#endif
