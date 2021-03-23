/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:32:34 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/23 15:30:49 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "ft_utils.h"

typedef struct	s_flag
{
	int	minus;
	int	zero;
	int	width;
	int	dot;
	int	type;
}			t_flag;

int	ft_printf(const char *format, ...);
t_flag	ft_init_flag(void);
void	ft_asterisk_flag(va_list ap, t_flag *flag);
int	ft_is_type(char c);
void	ft_num_flag(t_flag *flag, const char *format, int i);
void	ft_check_flag(va_list ap, t_flag *flag, const char *format, int i);
void	ft_flag_priority(t_flag *flag);
int	ft_print_width(t_flag *flag, int len);
int	ft_print_char(int c, t_flag *flag);
int	ft_str_len(char *str);
int	ft_put_str(char *str);
int	ft_print_str(char *str, t_flag *flag);
int	ft_print_int_num(int num, t_flag *flag);
int	ft_print_ull_num(unsigned long long num, t_flag *flag);
int	ft_print_ui_num(unsigned int num, t_flag *flag);
int	ft_print_arg(va_list ap, t_flag *flag);
int	ft_parse_format(va_list ap, const char *format);
int	ft_is_num(char c);

#endif
