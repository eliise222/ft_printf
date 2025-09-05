/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:27:20 by elise             #+#    #+#             */
/*   Updated: 2025/09/05 16:51:02 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_s(va_list args)
{
	char	*str;
	int		i;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
