/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:13:22 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/15 14:32:37 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int items, char *argv[])
{
	if (items > 1)
	{
		argv++;
		if (items == 2)
			argv = ft_split(*argv, ' ');
		push_swap(argv, -1);
		return (0);
	}
	return (0);
}
