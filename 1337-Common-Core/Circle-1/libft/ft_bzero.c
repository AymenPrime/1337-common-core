/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:14 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/30 11:05:21 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

#include "libft.h"

void ft_bzero(void *b, size_t n) {
    size_t i = 0;
    unsigned char *ptr = (unsigned char *)b;
    while(i < n) {
        ptr[i] = 0;
        i++;
    }
}

/*int main() {
    char ptr[10];

    int i = 0;
    
    while(i < 10) {
        ptr[i] = 'a' + i;
        printf("%c ", ptr[i]);
        i++;
    }
    
    ft_bzero(ptr, 10);
    
    i = 0;
    while(i < 10) {
        printf("%d", ptr[i]);
        i++;
    }
    
    printf("\n");
}*/
