/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:01:56 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/04 17:23:24 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	while (s[i])
		i++;
	if (i < len)
		len = i;
	if (start >= i)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (len--)
	{
		sub[i] = s[start++];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	k;
// 	char	*r;

// 	if(s == NULL)
// 		return (NULL);
// 	// if(start >= ft_strlen(s)) {
// 	// 	r = (char *)malloc(1);
// 	// 	if(!r)
// 	// }
// 	r = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!r)
// 		return (NULL);
// 	i = 0;
// 	k = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && k < len)
// 		{
// 			r[k] = s[i];
// 			k++;
// 		}
// 		i++;
// 	}
// 	r[k] = '\0';
// 	return (r);
// }
int	main(void)
{
	char *str = "0123456789";
	printf("%s", ft_substr("42", 0, 0));
}
