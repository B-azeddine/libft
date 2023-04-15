/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:42:01 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/05 18:42:29 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	size_t	i;
	char	*pdst;
	char	*psrc;

	i = 0;
	pdst = (char *)destination;
	psrc = (char *)source;
	if (!psrc && !pdst)
		return (NULL);
	if (psrc >= pdst)
		return (ft_memcpy(destination, source, num));
	else
	{
		while (i != num)
		{
			pdst[num - i - 1] = psrc[num - i - 1];
			i++;
		}
	}
	return (destination);
}
