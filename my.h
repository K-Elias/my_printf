#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

typedef struct	s_flags
{
  char		flags;
  int		(*func)(va_list va);
}		t_flags;

void		my_putchar(char c);
int		my_put_neg(int nb);
int		my_put_nbr(int nb);
int		my_putstr(char *str);
int		my_put_oct_nbr(unsigned int nb);
int		my_put_binary_nbr(unsigned int nb);
void		my_put_hex(char c);
int		my_put_hex_nbr(unsigned int nb);
void		my_put_hexmaj(char c);
int		my_put_hexmaj_nbr(unsigned int nb);
void		my_putchar_spe(char c);
int		my_putstr_spe(char *str);
unsigned int	my_put_pos(unsigned int nb);
int		my_put_ptr(unsigned long nb);
int		epur_sp(const char *str, int i);
void		my_putchar_mod(char c);
int		my_putchar_va(va_list va);
int		my_put_nbr_va(va_list va);
int		my_putstr_va(va_list va);
int		my_put_oct_nbr_va(va_list va);
int		my_put_hex_nbr_va(va_list va);
int		my_put_hexmaj_nbr_va(va_list va);
int		my_put_binary_nbr_va(va_list va);
int		my_put_oct_nbr_spe_va(va_list va);
int		my_put_pos_va(va_list va);
int		my_put_ptr_va(va_list va);
int		find_flag(const char *format, int i, va_list va);
int		my_printf(const char *format, ...);

#endif /* !MY_H_ */
