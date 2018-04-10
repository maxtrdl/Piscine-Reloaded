/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:43:36 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/03 11:06:30 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*retour;
	int		j;
	int		i;
	int		mem;

	i = min;
	j = 0;
	mem = max - min;
	if (min >= max)
		return (0);
	retour = malloc(mem * sizeof(int));
	while (i < max)
	{
		retour[j] = i;
		i++;
		j++;
	}
	return (retour);
}
