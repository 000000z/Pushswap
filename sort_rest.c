/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:31:06 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:08:47 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_pile **pile_a, t_pile **pile_b)
{
	int	sizelist;
	int	cheapest[2];

	sizelist = ft_pile_size(*pile_b);
	while (sizelist > 0)
	{
		finding_the_one_to_move(pile_a, pile_b, cheapest);
		allez_ca_part(pile_a, pile_b, cheapest[0], cheapest[1]);
		sizelist--;
	}
}

void	push_to_pile_b(t_pile **pile_a, t_pile **pile_b)
{
	int		size;

	size = ft_pile_size(*pile_a);
	while (size > 3)
	{
		ft_pb(pile_a, pile_b);
		size--;
	}
	sort_three(pile_a);
}

void	help2(t_pile **pile_a, t_pile **pile_b, int cheap_a)
{
	if (cheap_a > 0)
		rrr(pile_a, pile_b);
	else
		ft_rra(pile_a);
}

void	help3(t_pile **pile_a, t_pile **pile_b, int cheap_a)
{
	if (cheap_a < 0)
		rr(pile_a, pile_b);
	else
		ft_ra(pile_a);
}

void	allez_ca_part(t_pile **pile_a, t_pile **pile_b, int cheap_a,
		int cheap_b)
{
	while (cheap_b > 0)
	{
		help2(pile_a, pile_b, cheap_a);
		if (cheap_a > 0)
			cheap_a--;
		cheap_b--;
	}
	while (cheap_a > 0)
	{
		ft_rrb(pile_b);
		cheap_a--;
	}
	while (cheap_b < 0)
	{
		help3(pile_a, pile_b, cheap_a);
		if (cheap_a < 0)
			cheap_a++;
		cheap_b++;
	}
	while (cheap_a < 0)
	{
		ft_rb(pile_b);
		cheap_a++;
	}
	ft_pa(pile_a, pile_b);
}
