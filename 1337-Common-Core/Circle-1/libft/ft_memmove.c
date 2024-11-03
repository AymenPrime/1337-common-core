/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:33:47 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/03 11:07:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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
		ft_strncpy(dst, sr, n);
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
	ft_memmove(buffer + 5, buffer, 6);
	printf("%s\n", buffer);
	//  memmove(buffer + 2, buffer, 6);
	// printf("%s\n", buffer);
	return (0);
}*/