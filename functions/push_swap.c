/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:04:41 by pabastid          #+#    #+#             */
/*   Updated: 2023/08/12 14:11:25 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if (argc == 1)
		return (0);
	check_all(argc, argv);
	a = create_list(argc, argv);
	b = NULL;
	if (is_sorted(&a))
		exit(0);
	if (argc <= 4)
	{
		while (!is_sorted(&a))
			if_three(&a, 'a');
	}
	else if (argc <= 6)
		if_five(&a, &b);
	else if (argc <= 101)
		if_100(&a, &b);
	else if (argc <= 501)
		if_500(&a, &b);
	exit(0);
	return (0);
}
