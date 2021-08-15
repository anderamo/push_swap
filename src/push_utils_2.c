/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:15:02 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 13:23:16 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	repet_it(int *a, int items)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (items > i)
	{
		while (items > k)
		{
			if (a[i] == a[k])
			{
				ft_printf("Error\n");
				free(a);
				exit (1);
			}
			k++;
		}
		i++;
		k = i + 1;
	}
}

int	get_lower(int *a, int i)
{
	int	j;
	int	lower;

	j = 1;
	lower = 0;
	while (i > j)
	{
		if (a[lower] > a[j])
			lower = j;
		j++;
	}
	return (lower);
}

int	get_mid_2(int *a, int i, int lower, int mid)
{
	int	k;
	int	bottom;

	bottom = 0;
	k = i - 1;
	if (lower == 0)
		return (lower);
	i--;
	while (i >= 0)
	{
		if (a[i] <= mid)
		{
			bottom = i;
			break ;
		}
		i--;
	}
	if (k - bottom < k - lower)
		lower = bottom;
	return (lower);
}

int	get_mid(int *a, int i, int mid)
{
	int	j;
	int	bottom;
	int	lower;

	j = 0;
	lower = 0;
	bottom = 0;
	while (i > j)
	{
		if (a[j] <= mid)
		{
			lower = j;
			break ;
		}
		j++;
	}
	lower = get_mid_2(a, i, lower, mid);
	return (lower);
}
