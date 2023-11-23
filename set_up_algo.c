/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:50:05 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 16:58:03 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	second_price(t_pile *pile, int content)
{
	t_pile	*current;
	t_pile	*prev;
	int		i;
	int		index;

	current = pile;
	prev = get_last_node(pile);
	i = 0;
	index = 0;
	if (content > get_max_content(pile) || content < get_min_content(pile))
		return (get_min_pos(pile));
	while (current)
	{
		if (content < current->nbr && content > prev->nbr)
			index = i;
		i++;
		prev = current;
		current = current->next;
	}
	return (index);
}

int	cost_definer(int sizelist_a, int position)
{
	int	cost;

	cost = 0;
	if (position > sizelist_a / 2)
		cost = sizelist_a - position;
	else
		cost = -position;
	return (cost);
}

void	finding_the_one_to_move(t_pile **pile_a, t_pile **pile_b, int *tab)
{
	t_pile	*current_pile;
	int		field[3];
	int		price[2];
	int		taille[2];

	field[2] = 0;
	field[0] = 2147483647;
	current_pile = *pile_b;
	taille[0] = ft_pile_size(*pile_b);
	taille[1] = ft_pile_size(*pile_a);
	while (current_pile)
	{
		price[0] = cost_definer(taille[0], field[2]);
		price[1] = cost_definer(taille[1], second_price(*pile_a,
					current_pile->nbr));
		field[1] = total_cost(price[0], price[1]);
		if (field[0] > field[1])
		{
			field[0] = field[1];
			tab[0] = price[0];
			tab[1] = price[1];
		}
		field[2]++;
		current_pile = current_pile->next;
	}
}

int	total_cost(int price_a, int price_b)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (price_a < 0)
		a = price_a * -1;
	else if (price_a > 0)
		a = price_a;
	if (price_b < 0)
		b = price_b * -1;
	else if (price_b > 0)
		b = price_b;
	if ((price_a < 0 && price_b < 0) || (price_a > 0 && price_b > 0))
	{
		if (a >= b)
			return (a);
		return (b);
	}
	return (a + b);
}
