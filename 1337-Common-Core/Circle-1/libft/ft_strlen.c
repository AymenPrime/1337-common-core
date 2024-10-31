/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:12 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/30 15:41:06 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_srlen(const char *s) {
    size_t i = 0;
    
    while(s[i]) {
        i++;
    }
    return i;
}

/*int main() {
    char str[] = "aymen ";
    char one = ft_strlen(str);
    printf("%d\n", one);
}*/
