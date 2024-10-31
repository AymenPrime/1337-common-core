/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:02:00 by marvin            #+#    #+#             */
/*   Updated: 2024/10/31 18:02:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

       void *memset(void *s, int c, size_t n) {
        size_t i;
        unsigned char *str;
        str = (unsigned char *)s;
        i = 0;
        while(i < n) {
            str[i] = (unsigned char)c;
            i++;
        }
        return s;
       }

       int main() {
        char ptr[10];
        int i = 0;
        while(i < 10) {
            ptr[i] = 'a' + i;
            printf("%c ", ptr[i]);
            i++;
        }
        memset(ptr, 'b', 10);
        i = 0;
        while(i < 10) {
            printf("%c ", ptr[i]);
            i++;
        }
        printf("\n");
       }