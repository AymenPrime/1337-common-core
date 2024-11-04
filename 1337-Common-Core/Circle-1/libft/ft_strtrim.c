/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:04:13 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 15:04:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set) {
    
    int     start;
    int     end;
    char    *result;

    if (!s1)
        return "";
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start])) {
        start++;
    }
    end = ft_strlen(s1);
    while (start < end && ft_strchr(set, s1[end - 1])) {
        end--;
    }
    
    result = ft_substr(s1, start, end - start);
    
    return result;
}

int main() {
    char str[10];
  printf("%s\n", ft_strtrim(str, "-"));
  }