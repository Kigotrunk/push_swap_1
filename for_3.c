/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:50:40 by kortolan          #+#    #+#             */
/*   Updated: 2023/01/03 11:09:42 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	good_for_3(Element *element)
{
	if ((element->suivant->suivant->nombre > element->nombre) 
		&& (element->suivant->suivant->nombre > element->suivant->nombre))
	{
		if (element->nombre > element->suivant->nombre)
			sa(element);
		return ;
	}
	if  ((element->suivant->suivant->nombre > element->nombre 
		&& element->suivant->suivant->nombre < element->suivant->nombre)
		|| (element->suivant->suivant->nombre < element->nombre
		&& element->suivant->suivant->nombre > element->suivant->nombre))
	{
		if (element->nombre < element->suivant->nombre)
			sa(element);
		ra(element);
		return ;
	}
	else
		if (element_a->nombre > element_a->suivant->nombre
			&& element_a->nombre > element_a->suivant->suivant-nombre)
			sa(element);
	rra(element);
	return ;
}

void	all_in_b (Element **a, Element **b)
{
	if (!a)
		return NULL;
	while (a->suivant->suivant->suivant != NULL)
	{

	}
}
