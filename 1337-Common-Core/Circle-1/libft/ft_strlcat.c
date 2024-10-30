/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:01 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/30 15:38:32 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    
    if(!dest || !src) {
        return 0;
    }
    size_t  srcLen = ft_strlen(src);  
    size_t  destLen = ft_strlen(dest);
    
    if(size <= destLen) {
        return size + srcLen;
    }
    size_t  i = 0;
    int l = destLen;
    while(src[i] && destLen < size - 1) {
        dest[destLen] = src[i];
        i++;
        destLen++;
    }
    dest[destLen] = '\0';
    return (l + srcLen);
}
int main() {
    printf("%ld\n", ft_strlcat("Hello, ", "World", 10));
}