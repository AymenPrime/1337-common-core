/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:24:57 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/03 23:24:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			i;

	str = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/*int	main(void)
{
	char str[] = "Hello, World!";
	char ch;
	printf("%s", ft_strrchr(str, ch));
	return (0);
}*/