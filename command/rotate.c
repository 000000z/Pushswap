/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:16:44 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:30:54 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_pile **pile_a)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_a && (*pile_a)->next)
	{
		tmp = *pile_a;
		last = get_last_node(*pile_a);
		last->next = tmp;
		*pile_a = tmp->next;
		tmp->next = NULL;
		ft_printf("ra\n");
	}
}

void	ft_rb(t_pile **pile_b)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_b && (*pile_b)->next)
	{
		tmp = *pile_b;
		last = get_last_node(*pile_b);
		last->next = tmp;
		*pile_b = tmp->next;
		tmp->next = NULL;
		ft_printf("rb\n");
	}
}

void	ft_rabis(t_pile **pile_a)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_a && (*pile_a)->next)
	{
		tmp = *pile_a;
		last = get_last_node(*pile_a);
		last->next = tmp;
		*pile_a = tmp->next;
		tmp->next = NULL;
	}
}

void	ft_rbbis(t_pile **pile_b)
{
	t_pile	*last;
	t_pile	*tmp;

	if (*pile_b && (*pile_b)->next)
	{
		tmp = *pile_b;
		last = get_last_node(*pile_b);
		last->next = tmp;
		*pile_b = tmp->next;
		tmp->next = NULL;
	}
}
