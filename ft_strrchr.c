/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:56:49 by aueda             #+#    #+#             */
/*   Updated: 2022/04/14 14:38:42 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	*last_appear;

	last_appear = NULL;
	ss = (char *) s;
	if (c == 0)
		return (ss + ft_strlen(s));
	else
	{
		while (*ss != '\0')
		{
			if (*ss == (char)c)
				last_appear = ss;
			ss++;
		}
		return (last_appear);
	}
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char s[] = "ABCDECFG";
// 	int c = 'C';
// 	printf("Difference: %d\n",(int) (strrchr(s,c)-ft_strrchr(s,c)));
// 	printf("%s\n",ft_strrchr(s,c));
// }