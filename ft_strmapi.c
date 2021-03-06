/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 11:13:10 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:59:15 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		if ((ret = (char*)malloc(ft_strlen((char*)s) + 1)) == NULL)
			return (NULL);
		while (s[i])
		{
			ret[i] = (*f)(i, s[i]);
			++i;
		}
		ret[i] = 0;
		return (ret);
	}
	return (NULL);
}
