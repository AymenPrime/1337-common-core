/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:48:32 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/27 06:37:00 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


    #include <stdio.h>
    #include <string.h>
       
       void *ft_memchr(const void *s, int c, size_t n) {
        size_t i;
        unsigned char *str; 
        unsigned char ch;

        i = 0;
        str = (unsigned char *)s;
        ch = (unsigned char)c;

        while(i < n) {
            if(str[i] == ch) {
                return (void *)str + i;
            }
            i++;
        }
        return NULL;
       }
    int main() {
    const char *str = "Hello, World!";
    char ch = 's';
    //char *ptr = ft_memchr(str, ch, 14);
    printf("%s\n", ft_memchr(str, 's', 14));
    //printf("%p\n", ptr);
    }
