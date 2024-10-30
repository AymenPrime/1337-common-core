/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:41:37 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/30 15:41:58 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t	i;
	if(n == 0) {
		return 0;
	}
	i = 0;
	while(i < n) {
		if(s1[i] != s2[i]) {
			return s1[i] - s2[i];
		}
		if(s1[i] == '\0' || s2[i] == '\0')
			return 0;
	i++;
	}
	return 0;
}

/*int main() {
	char s1[] = "bmen";
	char s2[] = "aymen";
	printf("%d", ft_strncmp(s1, s2, 3));
	printf("%d", strncmp(s1, s2, 3));
}*/
