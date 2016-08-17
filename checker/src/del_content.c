/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcazako <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 17:24:11 by jcazako           #+#    #+#             */
/*   Updated: 2016/08/17 17:24:16 by jcazako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_content(void *content, size_t size)
{
	ft_bzero(content, size);
	free(content);
}
