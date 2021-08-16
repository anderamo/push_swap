/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:31:02 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 14:34:52 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(int *a)
{
	if (a[0] > a[1])
		sa(a);
}

void	to_the_top_a(int *a, int j, int i)
{
	int	count;

	count = 0;
	if (j == 0)
	{
		return ;
	}
	if (i - j < j)
	{
		while (count++ < i - j)
			rra(a, i);
	}
	else
	{
		while (count++ < j)
			ra(a, i);
	}
}

void	to_the_top_b(int *b, int j, int i)
{
	int	count;

	count = 0;
	if (j == 0)
	{
		return ;
	}
	if (i - j < j)
	{
		while (count++ < i - j)
			rrb(b, i);
	}
	else
	{
		while (count++ < j)
			rb(b, i);
	}
}

int	get_biarray_len(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
	{
		i++;
		argv++;
	}
	return (i);
}

void	push_swap(char **argv, int i)
{
	int	*a;
	int	*b;
	int	items;

	items = get_biarray_len(argv);
	a = malloc(items * sizeof(int));
	while (items > ++i)
		a[i] = ft_atoi_perf(argv[i]);
	repet_it(a, items);
	b = malloc((items) * sizeof(int));
	if (!is_sorted(a, items))
	{
		if (i == 2)
			sort_2(a);
		else if (i == 3)
			sort_3(a, i);
		else if (i > 3 && i < 9)
			sort(a, b, i);
		else
			sort_big(a, b, i, 0);
	}
	free(a);
	free(b);
}
