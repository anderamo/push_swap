/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:29:38 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 13:18:59 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*new_pb_add(int *array, int add, int i)
{
	int	number;
	int	number1;

	number = array[0];
	array[0] = add;
	i--;
	while (i > 1)
	{
		number1 = array[i - 1];
		array[i] = number1;
		i--;
	}
	if (i >= 1)
	{
		array[1] = number;
	}
	return (array);
}

void	rrb_pb(int *b, int i)
{
	int	number0;

	i--;
	number0 = b[i];
	while (i)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = number0;
}

void	pa(int *a, int *b, int count, int i)
{
	new_pb_add(a, b[0], i + 1);
	ra_pb(b, count);
	ft_printf("pa\n");
}

void	pb(int *a, int *b, int count, int i)
{
	new_pb_add(b, a[0], count + 1);
	ra_pb(a, i);
	ft_printf("pb\n");
}
