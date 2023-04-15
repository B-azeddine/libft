/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:45:32 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/05 18:29:03 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	void			*matchchar;

	i = 0;
	str = (unsigned char *)s;
	matchchar = NULL;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			matchchar = &str[i];
			break ;
		}
		i++;
	}
	return (matchchar);
}
