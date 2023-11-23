/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   print_u.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: adzinabi <adzinabi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/12 17:18:48 by adzinabi		  #+#	#+#			 */
/*   Updated: 2023/05/12 17:18:53 by adzinabi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(va_list args)
{
	size_t	n;

	n = va_arg(args, size_t);
	ft_putnbr_positive(n);
	return (count_len_u(n));
}
