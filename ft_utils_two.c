/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:38:37 by alprival          #+#    #+#             */
/*   Updated: 2022/04/21 21:38:55 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_adress(unsigned long long int n, char *str)
{
	int	i;

	i = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_putnbr_base(n, str);
	return (i);
}
