/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:01 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/25 22:44:53 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str) {
    int i = 0;
    
    while(str[i]) {
        i++;
    }
    return i;
}

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    
    if(!dest) {
        return 0;
    }
    if(!src) {
        printf("jfdkfl");
        return 0;
    }
    
    size_t srcLen = ft_strlen(src);  
    size_t destLen = ft_strlen(dest);
    
    if(size <= destLen) {
        return size + srcLen;
    }
    size_t i = 0;
    int l = destLen;
    while(src[i] && i < size - 1) {
        dest[destLen] = src[i];
        i++;
        destLen++;
    }
    dest[destLen] = '\0';
    return (l + srcLen);
}
int main() {
    char src[] = "";
    char dest[] = "Hello, ";
    printf("%d\n", ft_strlcat(dest, src, 5));
    //printf("%s\n", dest);
    //printf("%s\n", strcat(dest, src));
}