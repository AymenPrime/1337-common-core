/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:40:21 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/30 15:40:53 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) {
	unsigned int	i;
	unsigned int	srcLen;
	unsigned int 	dstLen;

	srcLen = ft_strlen(src);
	dstLen = ft_strlen(dest);

	if(!src)
		return 0;
	i = 0;
	while (src[i] && i < dstLen - size - 1) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return srcLen;
}

/*int main( {
	char dst[20];
	char src[] = "Hello, ";	
	printf("%d\n", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
}*/