/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:02:15 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 18:02:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n) {
	size_t i;

	i = 0;

	while(i < n) {
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
					return ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
						i++;
						}
						return 0;
}

int main() {
	printf("%d", ft_memcmp("aymdn", "aymen", 2));+
}*/
