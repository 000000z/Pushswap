/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:49:22 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 18:11:35 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*cree_noeud(t_pile **pile_a, char *argv)
{
	t_pile		*node;
	t_pile		*last;
	long int	nbr;

	nbr = ft_atoi(argv);
	if (!(nbr >= -2147483648 && nbr <= 2147483647))
	{
		ft_printf("Error\n");
		free_node(*pile_a);
		exit(0);
	}
	node = ft_lstnew(&nbr);
	if (node == NULL)
		return (NULL);
	if (*pile_a == NULL)
	{
		*pile_a = node;
		return (NULL);
	}
	last = get_last_node(*pile_a);
	last->next = node;
	return (node);
}

t_pile	*ft_lstnew(void *nbr)
{
	t_pile	*new;

	new = (t_pile *)malloc(sizeof(t_pile));
	if (new == NULL)
		return (NULL);
	new->nbr = *(int *)nbr;
	new->next = NULL;
	return (new);
}

int	in_quote(t_pile **pile_a, char *argv)
{
	char	**arg;
	int		i;

	i = 0;
	arg = ft_split(argv, ' ');
	if (!arg)
		return (free_tab(arg), 0);
	while (arg[i])
	{
		if (int_is_correct(arg[i]) == 0)
			return (free_tab(arg), ft_printf("Error121\n"), 0);
		cree_noeud(pile_a, arg[i]);
		i++;
	}
	return (free_tab(arg), 1);
}

int	nbr_listed(t_pile **pile_a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (int_is_correct(argv[i]) == 0)
			return (free_node(*pile_a), ft_printf("Error12\n"), 0);
		cree_noeud(pile_a, argv[i]);
		if (!pile_a)
			return (free_node(*pile_a), 0);
		i++;
	}
	return (1);
}

int	check_doubles(t_pile *pile_a)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	tmp = pile_a;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->nbr == tmp2->nbr)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (1);
}
