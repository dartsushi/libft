/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:26:37 by aueda             #+#    #+#             */
/*   Updated: 2022/04/14 14:37:57 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;

	ss = (char *) s;
	if (c == 0)
		return (ss + ft_strlen(s));
	else
	{
		while (*ss != '\0')
		{
			if (*ss == (char)c)
				return (ss);
			ss++;
		}
		return (NULL);
	}
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char s[] = "ABCDEFG";
// 	int c = 'C';
// 	printf("Difference: %d\n",(int) (strchr(s,c)-ft_strchr(s,c)));
// 	printf("%s\n",ft_strchr(s,c));
// }