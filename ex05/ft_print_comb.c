/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:15:46 by jporet            #+#    #+#             */
/*   Updated: 2022/06/10 15:45:29 by jporet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = '0' - 1;
	while (++nbr1 <= '9')
	{
		nbr2 = nbr1;
		while (++nbr2 <= '9')
		{
			nbr3 = nbr2;
			while (++nbr3 <= '9')
			{	
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
					ft_print_char(',');
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
					ft_print_char(' ');
				ft_print_char(nbr1);
				ft_print_char(nbr2);
				ft_print_char(nbr3);
			}
		}
	}
}
