/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   print_x.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: adzinabi <adzinabi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/12 17:18:57 by adzinabi		  #+#	#+#			 */
/*   Updated: 2023/05/12 17:18:59 by adzinabi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(va_list args)
{
	unsigned long long int	n;

	n = (unsigned long long int)va_arg(args, unsigned int);
	ft_putnbr_base(n, "0123456789abcdef");
	return (count_base(n));
}
