/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:32:02 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/02 23:32:07 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char ptr[10];
	int i = 0;
	while (i < 10)
	{
		ptr[i] = 'a' + i;
		printf("%c ", ptr[i]);
		i++;
	}
	memset(ptr, 'b', 10);
	i = 0;
	while (i < 10)
	{
		printf("%c ", ptr[i]);
		i++;
	}
	printf("\n");
}*/