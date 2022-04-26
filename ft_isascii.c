/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:46:33 by aueda             #+#    #+#             */
/*   Updated: 2022/04/05 20:29:27 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("lib code\n");
//     printf("%d\n", isascii('a'));
// 	printf("%d\n", isascii('{'));
// 	printf("%d\n", isascii('b'));
// 	printf("my code\n");
// 	printf("%d\n", isascii('a'));
// 	printf("%d\n", isascii('{'));
// 	printf("%d\n", isascii('b'));
// }