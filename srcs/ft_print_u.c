/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:18:57 by elise             #+#    #+#             */
/*   Updated: 2025/09/05 16:48:57 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned int n, int fd, char *base)
{
	char	c;
	int		base_len;

	base_len = ft_strlen(base);
	if (n >= base_len)
		ft_putnbr_base(n / base_len, fd, base);
	c = base[n % base_len];
	ft_putchar_fd(c, fd);
}

int	ft_nbrlen(unsigned int n, int base_len)
{
	int	len;

	len = 1;
	while (n >= (unsigned int)base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

int	ft_print_u(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_base(n, 1, "0123456789");
	return (ft_nbrlen(n, 10));
}
