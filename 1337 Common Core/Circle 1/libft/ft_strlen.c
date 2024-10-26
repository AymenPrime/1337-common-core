/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:12 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/25 21:04:04 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*#include <stdio.h>*/
#include <libft.h>

int ft_strlen(const char *str) {
    int i = 0;
    
    while(str[i]) {
        i++;
    }
    return i;
}

/*int main() {
    char str[] = "aymen ";
    char one = ft_strlen(str);
    printf("%d\n", one);
}*/