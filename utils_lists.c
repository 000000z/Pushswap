/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:31:09 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 15:43:42 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pile_size(t_pile *pile_a)
{
	int	i;

	i = 0;
	while (pile_a)
	{
		pile_a = pile_a->next;
		i++;
	}
	return (i);
}

t_pile	*get_last_node(t_pile *pile_a)
{
	t_pile	*last;

	last = pile_a;
	while (last->next)
		last = last->next;
	return (last);
}

void	print_pile(t_pile *pile)
{
	while (pile != NULL)
	{
		ft_printf("%d ", pile->nbr);
		pile = pile->next;
	}
	ft_printf("\n\n");
}

int	in_order(t_pile **pile_a)
{
	t_pile	*i;
	t_pile	*j;

	if (pile_a == NULL)
		return (0);
	i = *pile_a;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->nbr > j->nbr)
				return (0);
			j = j->next;
		}
		i = i->next;
	}
	return (1);
}
