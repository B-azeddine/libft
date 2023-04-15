/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:00:00 by ablidi            #+#    #+#             */
/*   Updated: 2022/10/17 19:26:32 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*p;
	size_t	nb_element;

	nb_element = count * size;
	p = malloc(nb_element);
	if (!p)
		return (0);
	ft_bzero(p, nb_element);
	return (p);
}
