/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:12:26 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 11:12:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int     i;
    int     j;
    int     len_s1;
    int     len_s2;

    if (!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}

/*int main() {
    char s1[10];
    printf("%s\n", ft_strjoin(s1, ));
    return (0);
}*/