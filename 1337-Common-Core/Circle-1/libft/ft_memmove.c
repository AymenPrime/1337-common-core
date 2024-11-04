/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:33:47 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/03 19:11:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sr;
	size_t	i;

	dst = (char *)dest;
	sr = (char *)src;
	if (dst == sr)
		return (dst);
	if (dst < sr)
		ft_memcpy(dst, sr, n);
	else
	{
		i = n;
		while (i > 0)
		{
			dst[i - 1] = sr[i - 1];
			i--;
		}
	}
	return (dst);
}
/*#include <string.h>
int	main(void)
{
	char buffer[] = "aymen lifop";
	///ft_memmove(buffer + 5, buffer, 6);
	//printf("%s\n", buffer);
	memmove(buffer + 5, buffer, 6);
	printf("%s\n", buffer);
	return (0);
}*/