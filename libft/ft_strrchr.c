/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:26:11 by mcipolla          #+#    #+#             */
/*   Updated: 2022/05/11 17:26:11 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;
	unsigned char	*str;
	unsigned char	ch;

	j = 0;
	i = 0;
	str = (unsigned char *) s;
	ch = (unsigned char) c;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			j = i;
		i++;
	}
	if (str[j] == ch)
		return ((char *)str + j);
	if (ch == '\0')
		return ((char *)str + i);
	return (NULL);
}

/*int main()
{
	printf("%s\n", strrchr("ciao matteo", 'c'));
	printf("%s\n", ft_strrchr("ciao matteo", 'c'));
}*/
