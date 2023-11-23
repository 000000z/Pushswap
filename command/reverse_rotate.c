/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:11:41 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:06:24 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_pile **pile_b)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_b && (*pile_b)->next)
	{
		last = get_last_node(*pile_b);
		tmp = *pile_b;
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = *pile_b;
		*pile_b = last;
		ft_printf("rrb\n");
	}
}

void	ft_rrbbis(t_pile **pile_b)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_b && (*pile_b)->next)
	{
		last = get_last_node(*pile_b);
		tmp = *pile_b;
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = *pile_b;
		*pile_b = last;
	}
}

void	ft_rra(t_pile **pile_a)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_a && (*pile_a)->next)
	{
		last = get_last_node(*pile_a);
		tmp = *pile_a;
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = *pile_a;
		*pile_a = last;
		ft_printf("rra\n");
	}
}

void	ft_rrabis(t_pile **pile_a)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_a && (*pile_a)->next)
	{
		last = get_last_node(*pile_a);
		tmp = *pile_a;
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = *pile_a;
		*pile_a = last;
	}
}

void	rrr(t_pile **pile_a, t_pile **pile_b)
{
	ft_rrabis(pile_a);
	ft_rrbbis(pile_b);
	ft_printf("rrr\n");
}
