/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:17:54 by elise             #+#    #+#             */
/*   Updated: 2025/09/05 16:50:48 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_printf_c(va_list args);
int	ft_print_i_or_d(va_list args);
int	ft_print_xx(va_list args);
int	ft_print_x(va_list args);
int	ft_print_u(va_list args);
int	ft_print_s(va_list args);
int	ft_print_percent(void);
int	ft_print_p(va_list args);

#endif