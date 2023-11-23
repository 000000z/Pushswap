/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:16:52 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:41:42 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_pile **pile_a)
{
	int	temp;

	if (*pile_a == NULL || (*pile_a)->next == NULL)
		return ;
	temp = (*pile_a)->nbr;
	(*pile_a)->nbr = (*pile_a)->next->nbr;
	(*pile_a)->next->nbr = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_pile **pile_b)
{
	int	temp;

	if (*pile_b == NULL || (*pile_b)->next == NULL)
		return ;
	temp = (*pile_b)->nbr;
	(*pile_b)->nbr = (*pile_b)->next->nbr;
	(*pile_b)->next->nbr = temp;
	write(1, "sb\n", 3);
}

void	ss(t_pile **pile_a, t_pile **pile_b)
{
	int	temp_a;
	int	temp_b;

	if (*pile_a == NULL || (*pile_a)->next == NULL)
		return ;
	if (*pile_b == NULL || (*pile_b)->next == NULL)
		return ;
	temp_a = (*pile_a)->nbr;
	(*pile_a)->nbr = (*pile_a)->next->nbr;
	(*pile_a)->next->nbr = temp_a;
	temp_b = (*pile_b)->nbr;
	(*pile_b)->nbr = (*pile_b)->next->nbr;
	(*pile_b)->next->nbr = temp_b;
	write(1, "ss\n", 3);
}
