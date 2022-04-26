/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aueda <aueda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:44:57 by Atsushi           #+#    #+#             */
/*   Updated: 2022/04/18 20:18:40 by aueda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			num++;
		}
	}
	return (num);
}

void	zero_array(int arr[4])
{
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	arr[3] = 0;
}

void	count_pos(char const *s, int *i, char c)
{
	while (s[i[2]] != c && s[i[2]] != '\0')
	{
		i[1]++;
		i[2]++;
	}
}

void	skip_c(char const *s, int *i, char c)
{
	while (s[i[2]] == c)
		i[2]++;
}

char	**ft_split(char const *s, char c)
{
	char	**s_list;
	int		i[4];

	if (s == NULL)
		return (NULL);
	zero_array(i);
	s_list = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (s_list == NULL)
		return (NULL);
	while (i[0] < (count_words(s, c)))
	{
		skip_c(s, i, c);
		i[3] = i[2];
		count_pos(s, i, c);
		s_list[i[0]] = ft_substr(s, i[3], i[1]);
		if (s_list[i[0]] == NULL)
		{
			free(s_list);
			return (NULL);
		}
		i[0]++;
		i[1] = 0;
	}
	s_list[i[0]] = NULL;
	return (s_list);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     char *str ="      split       this for   me  !       ";
//     int i = 0;
// 	char	**result = ft_split(str, ' ');
//     while (result[i] != NULL)
// 	{
//         printf("%d,%s\n",i ,result[i]);
// 		i++;
// 	}
// 	printf("%d,%s\n",i ,result[count_words(str,' ')]);
// 	return (0);
// }