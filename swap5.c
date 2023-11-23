/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:00 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 18:13:19 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pile_min(t_pile **pile_a)
{
	t_pile	*liste;
	int		i;

	liste = *pile_a;
	i = liste->nbr;
	while (liste)
	{
		if (i > liste->nbr)
			i = liste->nbr;
		liste = liste->next;
	}
	return (i);
}

int	index_min(t_pile **pile_a)
{
	t_pile	*liste;
	int		i;
	int		position;

	i = pile_min(pile_a);
	liste = *pile_a;
	position = 0;
	while (liste)
	{
		if (liste->nbr == i)
			break ;
		liste = liste->next;
		position++;
	}
	return (position);
}

void	min_position_4(t_pile **pile_a, t_pile **pile_b)
{
	int	min_position;

	min_position = index_min(pile_a);
	if (min_position == 0)
		return (ft_pb(pile_a, pile_b));
	else if (min_position == 1)
		return (ft_sa(pile_a), ft_pb(pile_a, pile_b));
	else if (min_position == 2)
		return (ft_ra(pile_a), ft_ra(pile_a), ft_pb(pile_a, pile_b));
	else if (min_position == 3)
		return (ft_rra(pile_a), ft_rra(pile_a), ft_pb(pile_a, pile_b));
}

void	min_position_5(t_pile **pile_a, t_pile **pile_b)
{
	int	min_position;

	min_position = index_min(pile_a);
	if (min_position == 0)
		return (ft_pb(pile_a, pile_b));
	else if (min_position == 1)
		return (ft_sa(pile_a), ft_pb(pile_a, pile_b));
	else if (min_position == 2)
		return (ft_ra(pile_a), ft_ra(pile_a), ft_pb(pile_a, pile_b));
	else if (min_position == 3)
		return (ft_rra(pile_a), ft_rra(pile_a), ft_pb(pile_a, pile_b));
	else if (min_position == 4)
		return (ft_rra(pile_a), ft_pb(pile_a, pile_b));
}

void	swap_five_numbers(t_pile **pile_a, t_pile **pile_b)
{
	if (ft_pile_size(*pile_a) == 5)
		min_position_5(pile_a, pile_b);
	min_position_4(pile_a, pile_b);
	sort_three(pile_a);
	ft_pa(pile_a, pile_b);
	ft_pa(pile_a, pile_b);
}
