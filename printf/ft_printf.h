/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:29:31 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/18 12:46:39 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //va_...
# include <unistd.h> //write

int	ft_printf(const char *str, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printptrhex(void *ptr);
int	ft_printnbr(int n);
int	ft_printunsigned(unsigned int n);
int	ft_printhexlow(unsigned int n);
int	ft_printhexup(unsigned int n);
#endif