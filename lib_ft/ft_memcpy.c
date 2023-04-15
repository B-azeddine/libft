/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:38:47 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/03 15:22:15 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			i;

	pdst = (unsigned char *)destination;
	psrc = (unsigned char *)source;
	i = 0;
	if (!pdst && !psrc)
		return (NULL);
	while (i < num)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (destination);
}
