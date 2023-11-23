/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:35:48 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 17:21:05 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(char *nptr)
{
	long int	i;
	long int	num;
	long int	sign;

	i = 0;
	num = 0;
	sign = 1;
	if (nptr[i] == '\0')
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		if (num * sign > INT_MAX || num * sign < INT_MIN)
			return (2147483648);
		i++;
	}
	return (sign * num);
}

int	int_is_correct(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
			return (0);
		i++;
		if (str[i] == '-')
			return (0);
	}
	return (1);
}

int	find_position(t_pile *pile, int nbr)
{
	t_pile	*current;
	int		i;

	i = 0;
	current = pile;
	if (current == NULL)
		return (0);
	while (current->nbr != nbr)
	{
		i++;
		current = current->next;
	}
	return (i);
}
