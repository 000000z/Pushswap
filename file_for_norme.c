/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_for_norme.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:58:33 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:08:27 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smol(t_pile **pile)
{
	int		smol;
	t_pile	*now;

	if (pile == NULL)
		return (0);
	now = *pile;
	smol = (*pile)->nbr;
	if (*pile == NULL)
		return (0);
	while (now != NULL)
	{
		if (smol > now->nbr)
			smol = now->nbr;
		now = now->next;
	}
	return (smol);
}

t_pile	*mv_smol_up(t_pile *pile)
{
	int	smollest_id;
	int	size;

	smollest_id = find_position(pile, find_smol(&pile));
	size = ft_pile_size(pile);
	if (smollest_id <= size / 2)
		while (pile->nbr != find_smol(&pile))
			ft_ra(&pile);
	else
		while (pile->nbr != find_smol(&pile))
			ft_rra(&pile);
	return (pile);
}
