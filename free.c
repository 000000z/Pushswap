/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:30:14 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 15:43:42 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_node(t_pile *pile_a)
{
	t_pile	*pile;
	t_pile	*nxt;

	pile = pile_a;
	while (pile != NULL)
	{
		nxt = pile->next;
		free(pile);
		pile = nxt;
	}
}

void	free_tab(char **argv)
{
	int	i;

	i = 0 ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}
