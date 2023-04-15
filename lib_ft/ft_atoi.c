/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablidi <ablidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:52:02 by ablidi            #+#    #+#             */
/*   Updated: 2022/11/05 16:51:48 by ablidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	mark;
	int	result;
	int	i;

	i = 0;
	result = 0;
	mark = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == '\n' || str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mark = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	result = result * mark;
	return (result);
}
