/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:30:20 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 13:24:05 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(int *a, int i)
{
	if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		sa(a);
	if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
	{
		sa(a);
		rra(a, i);
	}
	if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
		ra(a, i);
	if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		sa(a);
		ra(a, i);
	}
	if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
		rra(a, i);
}

int	get_upper(int *a, int i)
{
	int	j;
	int	upper;

	j = 1;
	upper = 0;
	while (i > j)
	{
		if (a[upper] < a[j])
			upper = j;
		j++;
	}
	return (upper);
}

void	sort(int *a, int *b, int i)
{
	int	j;
	int	count;
	int	k;

	k = i;
	count = 0;
	while (k > count && k - count != 3)
	{
		j = get_lower(a, i);
		to_the_top_a(a, j, i);
		pb(a, b, count, i);
		count++;
		i--;
	}
	sort_3(a, 3);
	rrb_pb(b, count);
	i = k;
	count = 0;
	while (k > count && k - count != 3)
	{
		pa(a, b, count, i);
		count++;
	}
}

int	*sort_a_to_index(int *sorted, int *a, int items, int i)
{
	int	j;
	int	change;

	while (items > i)
	{
		sorted[i] = a[i];
		i++;
	}
	i = 0;
	while (items > i)
	{
		j = i + 1;
		while (items > j)
		{
			if (sorted[i] > sorted[j])
			{
				change = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = change;
			}
			j++;
		}
		i++;
	}
	return (a);
}

int	get_index(int number, int items, int *sorted)
{
	int	i;

	i = 0;
	while (items > i)
	{
		if (sorted[i] == number)
			return (i);
		i++;
	}
	return (0);
}
