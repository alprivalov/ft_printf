/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:39:24 by alprival          #+#    #+#             */
/*   Updated: 2022/04/21 21:40:10 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	i;

	i = 0;
	i += write(1, &c, 1);
	return (i);
}

int	ft_putstr(char *s)
{
	int	index;
	int	nb;

	nb = 0;
	index = -1;
	if (s == NULL)
		return (ft_putstr("(null)"));
	while (s[++index])
		nb += write(1, &s[index], 1);
	return (nb);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		i += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			i += ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			i += ft_putnbr(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	return (i);
}

unsigned int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned long long int n, char *str)
{
	int	i;

	i = 0;
	if (n >= ft_len(str))
		i += ft_putnbr_base(n / ft_len(str), str);
	i += ft_putchar(str[n % ft_len(str)]);
	return (i);
}
