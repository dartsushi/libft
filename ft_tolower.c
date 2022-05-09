/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Atsushi <Atsushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:20:07 by aueda             #+#    #+#             */
/*   Updated: 2022/04/28 07:46:04 by Atsushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c += 'a' - 'A';
	}
	return (c);
}
// #include <stdio.h>
// int main(void)
// {
// 	int p = 'A';
// 	printf("%c\n", (char)ft_tolower(p));
// 	return (0);
// }