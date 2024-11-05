/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:01:56 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 00:06:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
 	size_t	k;
 	char	*r;

 	if(s == NULL)
 		return (NULL);
	if(start >= ft_strlen(s)) {
		r = (char *)malloc(1);
		r[0] = '\0';
		return (r);
	}
	if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start;
	r = (char *)malloc(sizeof(char) * (len + 1));
 	if (!r)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (i >= start && k < len)
		{
			r[k] = s[i];
			k++;
		}
		i++;
		}
		r[k] = '\0';
	return (r);
}
/*int	main(void)
{
	//char *str = "0123456789";
	printf("%s", ft_substr("Hello, World!", 8, 10));
}*/
