/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:33:47 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/04 15:20:33 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sr;
	size_t	i;
	size_t	t;
	
	if(!dest || !src)
		return (NULL);
	dst = (char *)dest;
	sr = (char *)src;
	if (dst <= sr)
	{
		i = 0;
		t = 0;
		while (i < n)
			dst[i++] = sr[t++];
	}
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
// #include <string.h>
// int	main(void)
// {
// 	/*char buffer[] = "aymen lifop";
// 	char bufferb[] = "aymen lifop";
// 	ft_memmove(buffer + 5, buffer, 6);
// 	printf("%s\n", buffer);*/
// 	printf("%p\n", memmove(NULL, NULL, 5));
// 	return (0);
// }