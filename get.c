/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:31:04 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:08:02 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_content(t_pile *pile)
{
	t_pile	*current;
	int		min;

	current = pile;
	min = 2147483647;
	while (current)
	{
		if (current->nbr < min)
			min = current->nbr;
		current = current->next;
	}
	return (min);
}

int	find_biggest_element(t_pile **pile)
{
	int		big;
	t_pile	*tmp;

	tmp = *pile;
	big = (*pile)->nbr;
	if (*pile == NULL)
		return (0);
	while (tmp)
	{
		if (big < tmp->nbr)
			big = tmp->nbr;
		tmp = tmp->next;
	}
	return (big);
}

int	get_max_content(t_pile *pile)
{
	t_pile	*current;
	int		max;

	current = pile;
	max = 0;
	while (current)
	{
		if (current->nbr > max)
			max = current->nbr;
		current = current->next;
	}
	return (max);
}

int	get_min_pos(t_pile *pile)
{
	t_pile	*current;
	t_pile	*min_node;
	int		i;
	int		j;

	current = pile;
	min_node = pile;
	i = 0;
	j = 0;
	while (current)
	{
		if (min_node->nbr > current->nbr)
		{
			j = i;
			min_node = current;
		}
		current = current->next;
		i++;
	}
	return (j);
}

void	put_min_top(t_pile **pile)
{
	if (get_min_pos(*pile) <= ft_pile_size(*pile) / 2)
	{
		while (get_min_pos(*pile) != 0)
			ft_ra(pile);
	}
	else
	{
		while (get_min_pos(*pile) != 0)
			ft_rra(pile);
	}
}
