/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:32:34 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/27 20:02:24 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "ft_utils.h"

typedef struct		s_flag
{
	int	minus;
	int	zero;
	int	width;
	int	dot;
	int	type;
}					t_flag;

t_flag				ft_init_flag(void);
int					ft_is_type(char c);
void				ft_asterisk_flag(va_list ap, t_flag *flag);
void				ft_num_flag(t_flag *flag, const char *format, int i);
int					ft_is_num(char c);
void				ft_check_flag(va_list ap, t_flag *flag, \
const char *format, int i);
void				ft_flag_priority(t_flag *flag);
int					ft_print_width(t_flag *flag, int len);
int					ft_print_char(int c, t_flag *flag);
int					ft_str_len(char *str);
int					ft_put_str(char *str, t_flag *flag);
int					ft_print_width_str(t_flag *flag, int len);
int					ft_print_str(char *str, t_flag *flag);
int					ft_num_base(t_flag *flag);
unsigned long long	ft_sign_change(unsigned long long num, t_flag *flag);
int					ft_print_arg(va_list ap, t_flag *flag);
int					ft_parse_format(va_list ap, const char *format);
int					ft_printf(const char *format, ...);
char				*ft_put_width(char *buf, \
unsigned long long	num, t_flag *flag);
char				*ft_put_hex_prefix(char *buf);
char				*ft_put_neg_mark(char *buf, unsigned long long num);
int					ft_print_int_num(unsigned long long num, t_flag *flag);
char				*ft_join_buf(char *buf_1, char *buf_2);
int					ft_num_len(unsigned long long num, t_flag *flag);
void				ft_put_num(char *buf, unsigned long long num, t_flag *flag);
char				*ft_init_buf(unsigned long long num, t_flag *flag);
int					ft_put_str_num(char *str);
char				*ft_create_width_buf(int len, \
unsigned long long	num, t_flag *flag);
int					put_pointer_prefix(char **buf);
int					put_minus(t_flag *flag, char **buf, \
unsigned long long num);
int					put_minus2(int buf_len, t_flag *flag, \
char **buf, unsigned long long num);
int					put_prec_str(unsigned long long nbr, \
t_flag *flag, char **buf, unsigned long long base);
int					print_nbr(unsigned long long nbr, \
t_flag *flag);
char				*ft_strjoin(char *s1, char *s2, int free_target);
int					put_width_str(char **buf, t_flag *flag);

#endif
