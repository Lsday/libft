/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:06:15 by oronda            #+#    #+#             */
/*   Updated: 2021/08/09 08:23:55 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	int		len;
	char	*ptr;

	ptr = NULL;
	i = 0;
	len = ft_strlen(s);
	while (i < len + 1)
	{
		if (s[i] == (unsigned char)c)
			ptr = &s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		return (ptr);
	if (!ptr)
		return (NULL);
	return (ptr);
}

int main(int argc, char const *argv[])
{
       char src[] =  "123456789";
        ft_strrchr(src, 'a');

	return 0;
}

