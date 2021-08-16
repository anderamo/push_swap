/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:32 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 15:28:00 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	change_index(int *a, int items)
{
	int	i;
	int	*sorted;

	sorted = malloc(items * sizeof(int));
	i = 0;
	sort_a_to_index(sorted, a, items, 0);
	while (items > i)
	{
		a[i] = get_index(a[i], items, sorted);
		i++;
	}
	free (sorted);
}

int	get_mid_value(int *a, int items)
{
	int	j;

	j = get_lower(a, items);
	if (items > 50)
		return (a[j] + 30);
	return (a[j] + (items - 3) / 2);
}

void	sort_big_2(int *a, int *b, int i, int count)
{
	int	j;

	while (count > 0)
	{
		j = get_upper(b, count);
		to_the_top_b(b, j, count);
		pa(a, b, count, i);
		i++;
		count--;
	}
}

void	sort_big(int *a, int *b, int i, int count)
{
	int	j;
	int	k;
	int	mid;

	change_index(a, i);
	k = i;
	while (k > count + 3)
	{
		mid = get_mid_value(a, i);
		if (mid + 3 == k)
			mid--;
		while (count <= mid && k > count + 3)
		{
			j = get_mid(a, i, mid);
			to_the_top_a(a, j, i);
			pb(a, b, count, i);
			count++;
			i--;
		}
	}
	sort_3(a, 3);
	sort_big_2(a, b, 3, count);
}

int	is_sorted(int *a, int a_size)
{
	int	i;

	i = 1;
	while (a_size > i)
	{
		if (a[i - 1] > a[i])
			return (0);
		i++;
	}
	return (1);
}
