/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:16:28 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/03 07:26:13 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = (void *)malloc(size * nmemb);
	if (!p)
		return (NULL);
	ft_bzero (p, size * nmemb);
	return (p);
}
/*
int main() 
{

    int* a = (int*) ft_calloc(5, sizeof(int));

    return 0;
}
*/