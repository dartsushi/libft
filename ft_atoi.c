/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:41:37 by aueda             #+#    #+#             */
/*   Updated: 2022/04/26 16:56:09 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == 0 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	is_overflow(int ndigits, int sgn, unsigned long val, char c)
{
	if (ndigits == 20 && ft_isdigit(c) && sgn == 1)
		return (1);
	else if (ndigits == 20 && val / LONG_MAX == 1 && sgn == 1)
		return (1);
	return (0);
}

int	is_underflow(int ndigits, int sgn, unsigned long val, char c)
{
	if (ndigits == 20 && ft_isdigit(c) && sgn == -1)
		return (1);
	else if (ndigits == 20 && \
val / ((unsigned long) LONG_MAX + 1) == 1 && sgn == -1)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	char			*nums;
	unsigned long	val;
	int				sgn;
	int				ndigits;

	nums = (char *) str;
	sgn = 1;
	val = 0;
	while (ft_isspace(*nums))
		nums++;
	if (*nums == '-')
		sgn *= -1;
	if (*nums == '+' || *nums == '-')
		nums++;
	while (*nums == '0')
		nums++;
	ndigits = 0;
	while (ndigits++ < 19 && ft_isdigit(*nums))
		val = val * 10 + (unsigned long)(*nums++ - '0');
	if (is_overflow(ndigits, sgn, val, *nums))
		return ((int) LONG_MAX);
	if (is_underflow(ndigits, sgn, val, *nums))
		return ((int) LONG_MIN);
	return ((int)(val * sgn));
}
// #include <stdio.h>
// int	main(void)
// {
// 	// char *n = "945";
// 	// int i1 = atoi(n);
// 	// int i2 = ft_atoi(n);
// 	// char n[40] = "99999999999999999999999999";
// 	// int i1 = atoi(n);
// 	// int i2 = ft_atoi(n);
// 	//char n[40] = "-99999999999999999999999999";
// 	//char n[] = "2147483647";
// 	// char n[] = "2147483648";
// 	// char n[] = "18446744073709551615";
// 	// char n[] = "9223372036854775808";
// 	//char n[] = "00000000000\t0000000008";
// 	char n[] = "000000000000000000008";
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);
// 	printf("atoi: %d\n", i1);
// 	printf("ft_atoi: %d\n", i2);
// 	return (0);
// }