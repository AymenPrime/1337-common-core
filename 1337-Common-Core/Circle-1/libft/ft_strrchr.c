/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:47:50 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 18:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
char *ft_strrchr(const char *s, int c) {
    const char *str;
    int i;

    str = (char *)s;
    i = strlen(s);

    while (i >= 0) {
        if (s[i] == (char)c)
            return (char *)&str[i];
        i--;
    }
    return (NULL);
}

int main() {
    char str[] = "Hello, World!";
    char ch;
    printf("%s", ft_strrchr(str, ch));
    return 0;
}
