/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:29:57 by aueda             #+#    #+#             */
/*   Updated: 2022/04/05 20:35:12 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n",isprint('\n'));
// 	printf("%d\n",isprint('0'));
// 	printf("%d\n",isprint('a'));
// 	printf("%d\n",isprint('9'));
// 	printf("my code\n");
// 	printf("%d\n",ft_isprint('\n'));
// 	printf("%d\n",ft_isprint('0'));
// 	printf("%d\n",ft_isprint('a'));
// 	printf("%d\n",ft_isprint('9'));
// }