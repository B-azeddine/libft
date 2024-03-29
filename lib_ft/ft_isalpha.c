/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:52:38 by ablidi            #+#    #+#             */
/*   Updated: 2022/10/19 12:31:31 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alph)
{
	if (((alph >= 'A') && (alph <= 'Z')) || ((alph >= 'a') && (alph <= 'z')))
	{
		return (1);
	}
	return (0);
}
