/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:25:07 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 18:21:46 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	algorithm(t_pile **pile_a, t_pile **pile_b)
{
	int	list;

	if (!pile_a || !(*pile_a) || !(*pile_a)->next)
		return (0);
	list = ft_pile_size(*pile_a);
	if (in_order(pile_a))
		return (0);
	else if (list == 2)
		ft_sa(pile_a);
	else if (list == 3)
		sort_three(pile_a);
	else if (list <= 5)
		swap_five_numbers(pile_a, pile_b);
	else
	{
		push_to_pile_b(pile_a, pile_b);
		sorting(pile_a, pile_b);
		put_min_top(pile_a);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_pile		*pile_a;
	t_pile		*pile_b;

	pile_a = NULL;
	pile_b = NULL;
	(void)pile_b;
	(void)argv;
	if (argc < 2)
		return (ft_printf("Error\n"), 0);
	else if (argc == 2)
	{
		in_quote(&pile_a, argv[1]);
		if (check_doubles(pile_a) == 0 || ft_pile_size(pile_a) == 1)
			return (free_node(pile_a), ft_printf("Error\n"), 0);
	}
	else if (argc > 2)
	{
		if (nbr_listed(&pile_a, argc, argv) == 0)
			return (0);
		if (check_doubles(pile_a) == 0 || ft_pile_size(pile_a) == 1)
			return (free_node(pile_a), ft_printf("Error\n"), 0);
	}
	algorithm(&pile_a, &pile_b);
	free_node(pile_a);
	return (1);
}
