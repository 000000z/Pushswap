/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:31:03 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 18:22:56 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	suite_de_sort_three(t_pile **pile_a)
{
	if ((*pile_a)->nbr < (*pile_a)->next->nbr
		&& (*pile_a)->next->nbr > (*pile_a)->next->next->nbr
		&& (*pile_a)->nbr > (*pile_a)->next->next->nbr)
		ft_rra(pile_a);
}

void	sort_three(t_pile **pile_a)
{
	if ((*pile_a)->nbr > (*pile_a)->next->nbr
		&& (*pile_a)->next->nbr < (*pile_a)->next->next->nbr
		&& (*pile_a)->nbr < (*pile_a)->next->next->nbr)
		ft_sa(pile_a);
	else if ((*pile_a)->nbr > (*pile_a)->next->nbr
		&& (*pile_a)->next->nbr > (*pile_a)->next->next->nbr
		&& (*pile_a)->nbr > (*pile_a)->next->next->nbr)
	{
		ft_sa(pile_a);
		ft_rra(pile_a);
	}
	else if ((*pile_a)->nbr > (*pile_a)->next->nbr
		&& (*pile_a)->next->nbr < (*pile_a)->next->nbr
		< (*pile_a)->next->next->nbr && (*pile_a)->nbr
		> (*pile_a)->next->next->nbr)
		ft_ra(pile_a);
	else if ((*pile_a)->nbr < (*pile_a)->next->nbr
		&& (*pile_a)->next->nbr > (*pile_a)->next->next->nbr
		&& (*pile_a)->nbr < (*pile_a)->next->next->nbr)
	{
		ft_sa(pile_a);
		ft_ra(pile_a);
	}
	suite_de_sort_three(pile_a);
}
