/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:48:09 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/25 11:53:00 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>
//#include <ctype.h>
//#include <libft.h>

int ft_isdigit(int c) {
    if(c >= '0' && c <= '9')
        return 1;

    return 0;
}

/*int main() {
    int c = 49;
    printf("%d\n", ft_isdigit(c));
    printf("%d\n", isdigit(c));
}*/