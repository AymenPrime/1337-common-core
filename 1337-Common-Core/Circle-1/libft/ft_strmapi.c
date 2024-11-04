/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:23 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 15:40:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *new;
    int len;
    if (!s || !f)
    {
        return (NULL);
    }
    len = ft_strlen(s);
    new = malloc((len + 1) * sizeof(char));
    if(!new)
        return (NULL);
    while(s[i]) {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}
/*char ex(unsigned int i, char c) {
    return c + i;
}*/
/*char ex1(unsigned int i, char c) {
    (void)i;
    if(c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
int main() {
    char str[] = "abc";
    printf("%s", ft_strmapi(str, ex1));
}*/
