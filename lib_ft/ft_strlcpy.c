/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:23:15 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/03 11:56:56 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstize)
{
	size_t	i;
	char	*psrc;

	i = 0;
	psrc = (char *)src;
	if (!dstize)
		return (ft_strlen(src));
	if (dstize > 0)
	{
		while (psrc[i] && (i < dstize - 1))
		{
			dst[i] = psrc[i];
			i++;
		}
		dst[i] = '\0';
		while (src[i])
			i++;
	}
	return (i);
}
