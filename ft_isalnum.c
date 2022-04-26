/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:40:16 by aueda             #+#    #+#             */
/*   Updated: 2022/04/05 19:45:53 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') \
	|| ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n",isalnum('\0'));
// 	printf("%d\n",isalnum('0'));
// 	printf("%d\n",isalnum('a'));
// 	printf("%d\n",isalnum('Z'));
// 	printf("my code\n");
// 	printf("%d\n",isalnum('\0'));
// 	printf("%d\n",ft_isalnum('0'));
// 	printf("%d\n",ft_isalnum('a'));
// 	printf("%d\n",ft_isalnum('Z'));
// }