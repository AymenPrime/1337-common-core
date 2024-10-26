/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:29 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/25 11:53:26 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <libft.h>

int ft_toupper(int c) {
    if(c >= 97 && c <= 122) {
        c -= 32;
    }
    return c;
}

/*int main() {
    int c = 65;
    printf("%c\n", ft_toupper(c));
}*/