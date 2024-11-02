/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:01:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 18:01:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
char *ft_strdup(const char *s) {
	char	*dst;
	int	i;
	int	size;

	size = 0;
	while(s[size])
		size++;
	if(!(dst = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while(s[i]) {
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int main() {
	printf("%s",ft_strdup("aymen"));
}*/
