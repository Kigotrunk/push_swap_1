/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:53:12 by kortolan          #+#    #+#             */
/*   Updated: 2023/01/03 11:28:17 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Element	*lstnew(void *content)
{
	Element	*lst;

	if (!lst = malloc(sizeof(Element)))
		return NULL;
	lst->nombre = content;
	lst->suivant = NULL;
	return (lst);
}

Element	ft_lstlast(Element *lst)
{
	if (!lst)
		return NULL;
	while (lst->suivant != NULL)
		lst = lst->suivant;
	return (lst);
}

void ft_lstadd_back(Element **lst, Element *new)
{
	Element	*lstb;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else 
		{
			lstb = ft_lstlast(*lst);
			lstb->suivant = new
		}
	}
}
