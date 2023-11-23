/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:10:26 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:10:27 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_pile **pile_a, t_pile **pile_b)
{
	t_pile	*temp;

	if (*pile_b)
	{
		temp = *pile_b;
		*pile_b = (*pile_b)->next;
		temp->next = *pile_a;
		*pile_a = temp;
		ft_printf("pa\n");
	}
}

void	ft_pb(t_pile **pile_a, t_pile **pile_b)
{
	t_pile	*temp;

	if (*pile_a)
	{
		temp = *pile_a;
		*pile_a = (*pile_a)->next;
		temp->next = *pile_b;
		*pile_b = temp;
		ft_printf("pb\n");
	}
}

void	rr(t_pile **pile_a, t_pile **pile_b)
{
	ft_rbbis(pile_b);
	ft_rabis(pile_a);
	ft_printf("rr\n");
}
