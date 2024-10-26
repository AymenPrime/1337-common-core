/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:48:02 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/25 11:52:57 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//#include <stdio.h>
//#include <ctype.h>
//#include <libft.h>

int ft_isascii(int c) {
    if(c >= 0 && c <= 127) {
        return 1;
    }
    return 0;
}
/*int main() {
    int c = 200;
    printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));

}*/