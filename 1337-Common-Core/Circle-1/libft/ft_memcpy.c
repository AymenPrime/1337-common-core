/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/31 18:01:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 18:01:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*s;
	size_t	i;

	if (dest == src)
		return (dest);
	dst = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*#include <string.h>
int	main(void) {
	char dest[10] = "worldpo";
	char src[] = "hello";
	ft_memcpy(dest, src, 1);
	printf("%s\n", dest);
	memcpy(dest, src, 1);
	printf("%s\n", dest);
	return (0);
}*/