/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:00:57 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/02 18:44:20 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen((char *)s1);
		while (s1[start] && ft_strchr((char *)set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr((char *)set, s1[end - 1])
			&& end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}
