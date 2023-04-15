/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:47 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/03 12:57:48 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pchar1;
	unsigned char	*pchar2;

	i = 0;
	pchar1 = (unsigned char *)s1;
	pchar2 = (unsigned char *)s2;
	while (i < n)
	{
		if (pchar1[i] != pchar2[i])
			return (pchar1[i] - pchar2[i]);
		i++;
	}
	return (0);
}
