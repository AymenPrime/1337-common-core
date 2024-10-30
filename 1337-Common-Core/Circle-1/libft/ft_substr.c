/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:01:56 by aait-our          #+#    #+#             */
/*   Updated: 2024/10/30 22:30:18 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len) {
        size_t i;
        size_t k;
        char *r;

        r = (char *)malloc(sizeof(*s) * (len + 1));
        
        if(!r)
                return (NULL);
        i = 0;
        k = 0;
        while(s[i]) {
                if (i >= start && k < len) {
                        r[k] = s[i];
                        k++;
                }
                i++;
                }
        r[k] = '\0';
        return (r);     
}
int main() {
        printf("%s\n", "aymen", 1, 3);
}