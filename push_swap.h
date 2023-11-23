/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:34:09 by adzinabi          #+#    #+#             */
/*   Updated: 2023/11/23 18:11:11 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_pile
{
	int				nbr;
	int				cost;
	int				position;
	struct s_pile	*next;
}					t_pile;

//					command					//
void				ft_sa(t_pile **pile);
void				swap_b(t_pile **pile);
void				ss(t_pile **pile_a, t_pile **pile_b);
void				ft_pa(t_pile **pile_a, t_pile **pile_b);
void				ft_pb(t_pile **pile_a, t_pile **pile_b);
void				ft_ra(t_pile **pile_a);
void				ft_rb(t_pile **pile_a);
void				rr(t_pile **pile_a, t_pile **pile_b);
void				ft_rra(t_pile **pile_a);
void				ft_rrb(t_pile **pile_b);
void				rrr(t_pile **pile_a, t_pile **pile_b);
void				ft_rabis(t_pile **pile_b);
void				ft_rbbis(t_pile **pile_b);

//utils_lists
t_pile				*get_last_node(t_pile *pile);
int					ft_pile_size(t_pile *pile_a);
void				print_pile(t_pile *pile);
int					in_order(t_pile **pile_a);

//utils
long int			ft_atoi(char *str);
int					int_is_correct(const char *str);
int					find_position(t_pile *pile, int nbr);
int					algorithm(t_pile **pile_a, t_pile **pile_b);

void				print_index(t_pile *pile_a);

//parsing
t_pile				*cree_noeud(t_pile **pile_a, char *argv);
t_pile				*ft_lstnew(void *nbr);
int					in_quote(t_pile **pile_a, char *argv);
int					nbr_listed(t_pile **pile_a, int argc, char **argv);
int					check_doubles(t_pile *pile_a);

//sort 3 and 5
void				sort_three(t_pile **pile_a);
void				swap_five_numbers(t_pile **pile_a, t_pile **pile_b);
void				sort_five(t_pile **pile_a, t_pile **pile_b);
void				sort_four(t_pile **pile_a, t_pile **pile_b);
int					find_smol(t_pile **pile);
t_pile				*mv_smol_up(t_pile *pile);

//set_up_algo
void				index_definer_first_half(t_pile *pile);
void				index_definer_second_half(t_pile *pile);
int					find_biggest_element(t_pile **pile);
void				target_finder(t_pile *pile_a, t_pile *pile_b);

//ft_split
int					countword(const char *s, char c);
char				*copystr(const char *original, char c);
char				**ft_fill_tab(char const *s, char c, char **tab,
						int len_tab);
char				**ft_split(char const *s, char c);

//free
void				free_node(t_pile *pile_a);
void				free_tab(char **argv);

//sort_rest
int					cost_definer_b(int sizelist, int position);
int					total_cost(int price_a, int price_b);
void				finding_the_one_to_move(t_pile **pile_a,
						t_pile **pile_b, int *tab);
void				allez_ca_part(t_pile **pile_a, t_pile **pile_b,
						int cheap_a, int cheap_b);
void				sorting(t_pile **pile_a, t_pile **pile_b);
void				push_to_pile_b(t_pile **pile_a, t_pile **pile_b);
void				put_min_top(t_pile **pile);
int					get_min_content(t_pile *pile);
int					get_max_content(t_pile *pile);
int					get_min_pos(t_pile *pile);

#endif
