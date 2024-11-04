/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:11:22 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/04 13:11:35 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	ft_memmove(dest, src, n);
}
/*#include <string.h>

int	main(void)
{
	char dest[10];
	char src[] = "hello";
	ft_memcpy(dest, src, 5);
	printf("%s\n", dest);
	// memcpy(dest, src, 1);
	// printf("%s\n", dest);
	return (0);
}*/