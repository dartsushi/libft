/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:32:50 by aueda             #+#    #+#             */
/*   Updated: 2022/04/05 19:40:54 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	printf("%d\n",isalpha('0'));
// 	printf("%d\n",isalpha('a'));
// 	printf("%d\n",isalpha('Z'));
// 	printf("my code\n");
// 	printf("%d\n",ft_isalpha('0'));
// 	printf("%d\n",ft_isalpha('a'));
// 	printf("%d\n",ft_isalpha('Z'));
// }